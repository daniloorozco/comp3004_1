#include "addclientphysicalpref.h"
#include "ui_addclientphysicalpref.h"


int clientIdPhysical;
addClientPhysicalPref::addClientPhysicalPref(int *d):
    ui(new Ui::addClientPhysicalPref)
{
    ui->setupUi(this);
    clientIdPhysical=*d;

    QSqlQuery qry(QSqlDatabase::database("db1"));
    QString s = "select exists(select * from animals where id = :d)";       // checks if id is already in db
    qry.prepare(s);
    qry.bindValue(":d",clientIdPhysical);
    if (qry.exec()){
        while (qry.next()){

            if (qry.value(0).toInt()==1){
              s = "select * from clientPhysical where id = :d";
              qry.prepare(s);
              qry.bindValue(":d",clientIdPhysical);
              if (qry.exec()){
                  while (qry.next()){

                      ui->lineEdit->setText(qry.value(4).toString());
                      ui->lineEdit_4->setText(qry.value(9).toString());
                      ui->lineEdit_2->setText(qry.value(1).toString());
                      ui->lineEdit_3->setText(qry.value(2).toString());
                      ui->comboBox->setCurrentText(qry.value(3).toString());
                      ui->comboBox_2->setCurrentText(qry.value(5).toString());
                      ui->lineEdit_5->setText(qry.value(7).toString());
                      ui->comboBox_3->setCurrentText(qry.value(8).toString());
                      ui->comboBox_4->setCurrentText(qry.value(6).toString());







                  }
              }


    }

}
    }
}

addClientPhysicalPref::~addClientPhysicalPref()
{
    delete ui;
}

void addClientPhysicalPref::on_buttonBox_accepted()
{

    QSqlQuery qry(QSqlDatabase::database("db1"));  // qeurys to database that "db1" is connected to
    QString breed,gender,type,size,hypoallergenic,coatType,coatLength,color,q;
    int age;



    age = ui->lineEdit->text().trimmed().toInt();
    color = ui->lineEdit_4->text().trimmed();
    type = ui->lineEdit_2->text().trimmed();
    breed = ui->lineEdit_3->text().trimmed();
    gender = ui->comboBox->currentText().trimmed();
    size = ui->comboBox_2->currentText().trimmed();
    coatType = ui->lineEdit_5->text().trimmed();
    coatLength = ui->comboBox_3->currentText().trimmed();
    hypoallergenic = ui->comboBox_4->currentText().trimmed();

    addClientNonPhysical a(&clientIdPhysical);
    a.setModal(true);
    a.exec();
    close();    //close dialog

    q = "insert or replace into clientPhysical (id,type,breed,gender,age,size,hypoallergenic,coatType,coatLength,color)values(:a,:b,:c,:d,:e,:f,:g,:h,:i,:j)";
    qry.prepare(q);
    qry.bindValue(":a",clientIdPhysical);
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
