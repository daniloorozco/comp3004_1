#include "staffwindow.h"
#include "ui_staffwindow.h"



int animalSelected;
staffWindow::staffWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::staffWindow)
{
    ui->setupUi(this);

    ui->listWidget_2->hide();
    ui->listWidget_3->hide();

   QSqlDatabase db = QSqlDatabase::database("db1");

  //  if (db.open()){    //open db and update list view
        updateView();
    //}



}

staffWindow::~staffWindow()
{
    delete ui;
}




void staffWindow::on_listWidget_itemPressed(QListWidgetItem *item)
{

    animalSelected = ui->listWidget->currentRow()+1;             //index of item clicked

    QString s,q = "select * from animalPhysical where id = :num";  //get animal that was clicked
     s= item->text();
    QSqlQuery query(QSqlDatabase::database("db1"));         // query to appropriate database connection
    query.prepare(q);
    query.bindValue(":num",animalSelected);

    ui->listWidget_3->clear();
     ui->listWidget_2->clear();

            if (query.exec()){                    // executes query and updates the animal info
                while (query.next()){

                    int i;

                    for (i=1;i<10;i++){
                         ui->listWidget_2->addItem((query.record().fieldName(i)+": "+query.value(i).toString()));
                    }



                }

            }


       q = "select * from animalNonPhysical where id = :num";
       query.prepare(q);
       query.bindValue(":num",animalSelected);
       if (query.exec()){
           while (query.next()){
                int i ;
                for (i=1;i<13;i++)
                   ui->listWidget_3->addItem((query.record().fieldName(i)+": "+query.value(i).toString()));

           }
       }


    ui->label_7->setText(s);
    ui->label_5->setText("Physical \nAttributes");
    ui->label_6->setText("non-Physical \nAttributes");
    ui->listWidget_2->show();
    ui->listWidget_3->show();
    ui->label_8->setText("");
    ui->label_9->setText("");



}

void staffWindow::on_pushButton_2_clicked()  // add animal button is clicked
{
    int id;
    QSqlQuery qry(QSqlDatabase::database("db1"));
    if (qry.exec("select count(*) from animals")){
        while (qry.next()){
        id = qry.value(0).toInt()+1;           // gives animal the next valid id #
        }
    }
    addAnimalWindow a(&id);
    a.setModal(true);
    a.exec();
    updateView();                       //update view after animal is added
}

void staffWindow::updateView()              //update the list view of all animals according to database
{
    ui->listWidget->clear();
    ui->listWidget_4->clear();
    QSqlQuery qry(QSqlDatabase::database("db1"));
    if (qry.exec("select * from animals group by id")){
        while (qry.next()){
            QString s = qry.value(1).toString();
            ui->listWidget->addItem(s);
        }

    }


    if (qry.exec("select * from clients group by id")){
        while (qry.next()){
             QString s = qry.value(1).toString();
            ui->listWidget_4->addItem(s);
        }

    }



}

void staffWindow::on_pushButton_3_clicked()             // add client is clicked
{
    int id;

    QSqlQuery qry(QSqlDatabase::database("db1"));
    if ( qry.exec("select count(*) from clients")){
        while (qry.next()){
         id = qry.value(0).toInt()+1;       // give a new unused id to the view
 }
 }




    addClient a(&id);
    a.setModal(true);
    a.exec();
    updateView();
}

void staffWindow::on_listWidget_4_itemClicked(QListWidgetItem *item)  // a client is clicked
{
    ui->listWidget_2->show();
    ui->listWidget_3->show();
    ui->listWidget_2->clear();
    ui->listWidget_3->clear();
    ui->label_5->setText("Physical \nPreferences");
    ui->label_6->setText("non-Physical \nAttributes");
    ui->label_7->setText(item->text());

    QSqlQuery qry (QSqlDatabase::database("db1"));
    QString address,phone,s;
    int id;

    id = ui->listWidget_4->currentRow()+1;

    s= "select * from clients where id = :d";
    qry.prepare(s);
    qry.bindValue(":d",id);

    if (qry.exec()){
        while (qry.next()){
            ui->label_8->setText(qry.value(2).toString());
            ui->label_9->setText(qry.value(3).toString());


        }
    }
    s = "select * from clientPhysical where id = :d";
    qry.prepare(s);
    qry.bindValue(":d",id);

    if (qry.exec()){
        while (qry.next()){
            int i ;
            for (i=1;i<10;i++)
               ui->listWidget_2->addItem((qry.record().fieldName(i)+": "+qry.value(i).toString()));

        }
    }
    s = "select * from clientNonPhysical where id = :d";
    qry.prepare(s);
    qry.bindValue(":d",id);

    if (qry.exec()){
        while (qry.next()){
            int i ;
            for (i=1;i<9;i++)
               ui->listWidget_3->addItem((qry.record().fieldName(i)+": "+qry.value(i).toString()));

        }
    }




}

void staffWindow::on_pushButton_4_clicked() // edit animal button
{


    addAnimalWindow w(&animalSelected);         // open window and send it the currently selected animals id;
    w.setModal(true);
    w.exec();
    updateView();





}

void staffWindow::on_pushButton_5_clicked()
{
    matchWindow w;


    QSqlQuery qry(QSqlDatabase::database("db1"));
    QString c = "select * from clientPhysical group by id ";
    QString  p;
    QString s;

    if (qry.exec(c)){
        while (qry.next()){
             p="";
             p.append(qry.record().fieldName(1)+"="+ "'"+qry.value(1).toString()+"' collate nocase group by id");
            getPoints(&p,qry.value(0).toInt(),&w);

            }




        }

    w.setModal(true);
    w.exec();





    }



void staffWindow::getPoints(QString *s, int id,matchWindow *w){




    QSqlQuery qry(QSqlDatabase::database("db1"));
    QSqlQuery qry2(QSqlDatabase::database("db1"));
    int score,maxScore=0;
    QString animalMatch;
    QString clientMatch;

    QMap<QString,QList<QString>> nonPhys;
    QMap<QString,QList<QString>> nonPhys2;

    nonPhys.insert("patience",{"temperament"});
    nonPhys.insert("freetime",{"playfulness","dependence"});
    nonPhys.insert("activitylevel",{"energy","coopwithhumans"});
    nonPhys.insert("petsinhouse",{"coopwithanimals"});
    nonPhys.insert("peopleinhouse",{"coopwithhumans"});
    nonPhys.insert("petbudget",{"diet"});
    nonPhys.insert("spaceathome",{"energy","loudness"});

    nonPhys2.insert("checkups",{"health"});
    nonPhys2.insert("petbudget",{"health"});
    nonPhys2.insert("freetime",{"trainability","health"});
    nonPhys2.insert("patience",{"trainability"});




    QString q = "select * from animals natural join animalPhysical natural join animalNonPhysical where "+*s,j= "select * from clients natural join clientPhysical natural join clientNonPhysical where id = :d group by id";
    qry2.prepare(j);
    qry2.bindValue(":d",id);

    if (qry2.exec()){
        while (qry2.next()){    //client info
            if (qry.exec(q)){
                while (qry.next()){ //animals  info

                     score =0;

                    for (int i=5;i<qry2.record().count();i++){
                        for (int j=3;j<qry.record().count();j++){

                            if (qry2.record().fieldName(i).toLower()==qry.record().fieldName(j).toLower()){
                                    if (qry2.record().fieldName(i).toLower()=="age"){
                                        if (qry.value(j).toInt()==qry2.value(i).toInt())
                                            score+=2;

                                        else if (qry.value(j).toInt()==qry2.value(i).toInt()-1 ||  qry.value(j).toInt()==qry2.value(i).toInt()+1)
                                            score++;

                                    }
                                    else if (qry.value(j).toString().toLower()==qry2.value(i).toString().toLower()){
                                        if (qry.record().fieldName(j).toLower()=="breed")
                                            score+=3;

                                        else if (qry.record().fieldName(j).toLower()=="gender")
                                            score+=2;

                                        else if (qry.record().fieldName(j).toLower()!="hypoallergenic")
                                            score++;


                                    }
                    }

                            else {

                                QString animalColumn = qry.record().fieldName(j).toLower();
                                QString clientColumn = qry2.record().fieldName(i).toLower();

                                if (clientColumn!="petbudget"){
                                 int difference = qFabs(qry2.value(i).toInt() - qry.value(j).toInt());  //absolute value

                    if (nonPhys.value(clientColumn).contains(animalColumn)){
                        if (difference ==1)
                            score++;

                        else if (difference ==0)
                            score+=2;

                    }


                    else if (nonPhys2.value(clientColumn).contains(animalColumn)){
                                    if (difference >2)
                                        score+=2;

                                    else if (difference == 2)
                                        score++;



                            }
                                }




                        }
                    }

                }
                    if (score>maxScore){
                       maxScore = score;
                       clientMatch = qry2.value(1).toString();
                       animalMatch = qry.value(1).toString();
                    }

        }

    }


    }

}
     w->addToList(clientMatch+" matched with "+animalMatch+" with a score of: "+QString::number(maxScore));


}





