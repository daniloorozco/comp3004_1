#include "addnonphysical.h"
#include "ui_addnonphysical.h"

int i;
addNonPhysical::addNonPhysical(int *id) :
    ui(new Ui::addNonPhysical)
{
    ui->setupUi(this);
    i = *id;

    QSqlQuery qry(QSqlDatabase::database("db1"));
    QString s = "select exists(select * from animals where id = :d)";   // checks if id is already in db
    qry.prepare(s);
    qry.bindValue(":d",i);
    if (qry.exec()){
        while (qry.next()){

            if (qry.value(0).toInt()==1){

              s = "select * from animalNonPhysical where id = :d";
              qry.prepare(s);
              qry.bindValue(":d",i);
              if (qry.exec()){
                  while (qry.next()){
                ui->horizontalSlider->setValue(qry.value(1).toInt());
                ui->horizontalSlider_2->setValue(qry.value(2).toInt());
                ui->horizontalSlider_3->setValue(qry.value(3).toInt());
                ui->horizontalSlider_4->setValue(qry.value(4).toInt());
                ui->horizontalSlider_5->setValue(qry.value(5).toInt());
                ui->horizontalSlider_6->setValue(qry.value(6).toInt());
                ui->horizontalSlider_10->setValue(qry.value(7).toInt());
                ui->horizontalSlider_9->setValue(qry.value(8).toInt());
                ui->horizontalSlider_8->setValue(qry.value(9).toInt());
                ui->horizontalSlider_7->setValue(qry.value(10).toInt());
                ui->horizontalSlider_12->setValue(qry.value(11).toInt());
                ui->horizontalSlider_11->setValue(qry.value(12).toInt());
}
              }
            }
        }
    }



}

addNonPhysical::~addNonPhysical()
{
    delete ui;
}

void addNonPhysical::on_buttonBox_2_accepted()
{

    QSqlQuery qry(QSqlDatabase::database("db1"));
    int temp,fear,diet,loud,active,loyal,patience,play,depend,reckless,animals,humans;





    temp = ui->horizontalSlider->value();
    fear = ui->horizontalSlider_2->value();
    diet = ui->horizontalSlider_3->value();
    loud = ui-> horizontalSlider_4->value();
    active = ui->horizontalSlider_5->value();
    loyal = ui->horizontalSlider_6->value();
    patience = ui->horizontalSlider_10->value();
    play = ui->horizontalSlider_9->value();
    depend = ui-> horizontalSlider_8->value();
    reckless = ui->horizontalSlider_7->value();
    animals = ui->horizontalSlider_12->value();
    humans = ui->horizontalSlider_11->value();



      QString s = "insert or replace into animalNonPhysical (id,Temperament,fear,Diet,Loudness,Health,Playfulness,Dependence,Energy,CoopWithanimals,CoopWithHumans,Intelligence,Trainability) values (:a,:b,:c,:d,:e,:f,:g,:h,:i,:j,:k,:l,:m)";

     qry.prepare(s);
     qry.bindValue(":a",i);
     qry.bindValue(":b",temp);
     qry.bindValue(":c",fear);
     qry.bindValue(":d",diet);
     qry.bindValue(":e",loud);
     qry.bindValue(":f",active);
     qry.bindValue(":g",loyal);
     qry.bindValue(":h",patience);
     qry.bindValue(":i",play);
     qry.bindValue(":j",depend);
     qry.bindValue(":k",reckless);
     qry.bindValue(":l",animals);
     qry.bindValue(":m",humans);
     qry.exec();

close();











}
