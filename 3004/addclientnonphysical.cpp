#include "addclientnonphysical.h"
#include "ui_addclientnonphysical.h"

int nonPhysId;
addClientNonPhysical::addClientNonPhysical(int *d):
    ui(new Ui::addClientNonPhysical)
{
    ui->setupUi(this);
   nonPhysId = *d;


   QSqlQuery qry(QSqlDatabase::database("db1"));
   QString s = "select exists(select * from clients where id = :d)";                // checks if id already exists in db
   qry.prepare(s);
   qry.bindValue(":d",nonPhysId);
   if (qry.exec()){
       while (qry.next()){

           if (qry.value(0).toInt()==1){

             s = "select * from clientNonPhysical where id = :d";
             qry.prepare(s);
             qry.bindValue(":d",nonPhysId);
             if (qry.exec()){
                 while (qry.next()){
               ui->horizontalSlider->setValue(qry.value(1).toInt());
               ui->horizontalSlider_2->setValue(qry.value(2).toInt());
               ui->spinBox->setValue(qry.value(3).toInt());
               ui->spinBox_2->setValue(qry.value(4).toInt());
               ui->comboBox->setCurrentText(qry.value(5).toString());
               ui->horizontalSlider_6->setValue(qry.value(6).toInt());
               ui->horizontalSlider_8->setValue(qry.value(8).toInt());
               ui->horizontalSlider_7->setValue(qry.value(7).toInt());
}
             }
           }
       }
   }






}

addClientNonPhysical::~addClientNonPhysical()
{
    delete ui;
}

void addClientNonPhysical::on_buttonBox_accepted()
{

    QSqlQuery qry(QSqlDatabase::database("db1"));
    int time,activity,pets,humans,patience,checkUps,space;
    QString budget;





   time= ui->horizontalSlider->value();
    activity = ui->horizontalSlider_2->value();
    pets = ui->spinBox->value();
    humans = ui-> spinBox_2->value();
    budget = ui->comboBox->currentText();
    checkUps = ui->horizontalSlider_6->value();
    patience = ui->horizontalSlider_7->value();
    space = ui->horizontalSlider_8->value();


      QString s = "insert or replace into clientNonPhysical (id,freeTime,ActivityLevel,petsInHouse,peopleInHouse,petBudget,checkUps,patience,spaceAtHome) values (:a,:b,:c,:d,:e,:f,:g,:h,:i)";

     qry.prepare(s);
     qry.bindValue(":a",nonPhysId);
     qry.bindValue(":b",time);
     qry.bindValue(":c",activity);
     qry.bindValue(":d",pets);
     qry.bindValue(":e",humans);
     qry.bindValue(":f",budget);
     qry.bindValue(":g",checkUps);
     qry.bindValue(":h",patience);
     qry.bindValue(":i",space);
     qry.exec();

close();




}
