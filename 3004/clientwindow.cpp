#include "clientwindow.h"
#include "ui_clientwindow.h"

int id;
clientWindow::clientWindow(int *client):
    ui(new Ui::clientWindow)
{
    ui->setupUi(this);
    updateView();
    id = *client;

    QSqlQuery qry(QSqlDatabase::database("db1"));
    QString s = "select name from clients where id = :d";
    qry.prepare(s);
    qry.bindValue(":d",id);

   if (qry.exec()){
       while (qry.next()){
           ui->label_4->setText(qry.value(0).toString());   // print clients name in top corner
       }
   }



}

clientWindow::~clientWindow()
{
    delete ui;
}


void clientWindow::updateView()              //update the list view of all animals according to database
{
    ui->listWidget->clear();
    QSqlQuery qry(QSqlDatabase::database("db1"));
    if (qry.exec("select * from animals order by id asc")){
        while (qry.next()){
            QString s = qry.value(1).toString();
            ui->listWidget->addItem(s);
        }

    }





}

void clientWindow::on_listWidget_itemClicked(QListWidgetItem *item) //animal is clicked
{

    int n = ui->listWidget->currentRow()+1;             //index of item clicked

    QString s,q = "select * from animalPhysical where id = :num";  //get animal that was clicked
     s= item->text();
    QSqlQuery query(QSqlDatabase::database("db1"));         // query to appropriate database connection
    query.prepare(q);
    query.bindValue(":num",n);

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
       query.bindValue(":num",n);
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





}

void clientWindow::on_pushButton_clicked() //edit info button is clicked
{

    addClient c(&id);
            c.setModal(true);
            c.exec();
}






