#include "animalphyspref.h"
#include "ui_addanimalwindow.h"

int animalId;
addAnimalWindow::addAnimalWindow(int * d):
    ui(new Ui::addAnimalWindow)
{
    ui->setupUi(this);
    animalId = *d;


    QSqlQuery qry(QSqlDatabase::database("db1"));
    QString s = "select exists(select * from animals where id = :d)";   // if animal id is currently in db, preset values
    qry.prepare(s);
    qry.bindValue(":d",animalId);
    if (qry.exec()){
        while (qry.next()){

            if (qry.value(0).toInt()==1){

              s = "select * from animals natural join animalPhysical where id = :d";
              qry.prepare(s);
              qry.bindValue(":d",animalId);
              if (qry.exec()){
                  while (qry.next()){
                      setLine1Text(qry.value(1).toString());
                      setLine2Text(qry.value(2).toString());
                      setLine3Text(qry.value(3).toString());
                      setBox(qry.value(4).toString());
                      setLine6Text(qry.value(5).toString());
                      setBox2(qry.value(6).toString());
                      setBox4(qry.value(7).toString());
                      setLine5Text(qry.value(8).toString());
                      setBox3(qry.value(9).toString());
                      setLine4Text(qry.value(10).toString());



                  }
              }
            }

}
    }
}

addAnimalWindow::~addAnimalWindow()
{
    delete ui;
}

void addAnimalWindow::on_buttonBox_accepted()
{

    QSqlQuery qry(QSqlDatabase::database("db1"));  // qeurys to database that "db1" is connected to
    QString name,breed,gender,type,size,hypoallergenic,coatType,coatLength,color;
    int age;



    name = ui->lineEdit->text().trimmed();
    color = ui->lineEdit_4->text().trimmed();
    type = ui->lineEdit_2->text().trimmed();
    breed = ui->lineEdit_3->text().trimmed();
    gender = ui->comboBox->currentText().trimmed();
    size = ui->comboBox_2->currentText().trimmed();
    coatType = ui->lineEdit_5->text().trimmed();
    coatLength = ui->comboBox_3->currentText().trimmed();
    hypoallergenic = ui->comboBox_4->currentText().trimmed();
    age= ui->lineEdit_6->text().trimmed().toInt();

    addNonPhysical a(&animalId);
    a.setModal(true);
    a.exec();
    close();    //close dialog

    QString q = "insert or replace into animals (id,name)values (:d,:name)";
    qry.prepare(q);
    qry.bindValue(":d",animalId);
    qry.bindValue(":name",name);
    qry.exec();

    q = "insert or replace into animalPhysical (id,type,breed,gender,age,size,hypoallergenic,coatType,coatLength,color)values(:a,:b,:c,:d,:e,:f,:g,:h,:i,:j)";
    qry.prepare(q);
    qry.bindValue(":a",animalId);
    qry.bindValue(":b",type);
    qry.bindValue(":c",breed);
    qry.bindValue(":d",gender);
    qry.bindValue(":e",age);
    qry.bindValue(":f",size);
    qry.bindValue(":g",hypoallergenic);
    qry.bindValue(":h",coatType);
    qry.bindValue(":i",coatLength);
    qry.bindValue(":j",color);
    qry.exec();



}




 void addAnimalWindow::setLine1Text(QString s){ ui->lineEdit->setText(s);}
 void addAnimalWindow::setLine2Text(QString s){ui->lineEdit_2->setText(s);}
void addAnimalWindow::setLine3Text(QString s){ui->lineEdit_3->setText(s);}
void addAnimalWindow::setLine4Text(QString s){ui->lineEdit_4->setText(s);}
void addAnimalWindow::setLine5Text(QString s){ui->lineEdit_5->setText(s);}
void addAnimalWindow::setLine6Text(QString s){ui->lineEdit_6->setText(s);}
void addAnimalWindow::setBox(QString s){ui->comboBox->setCurrentText(s);}
void addAnimalWindow::setBox2(QString s){ui->comboBox_2->setCurrentText(s);}
void addAnimalWindow::setBox3(QString s){ui->comboBox_3->setCurrentText(s);}
void addAnimalWindow::setBox4(QString s){ui->comboBox_4->setCurrentText(s);}






