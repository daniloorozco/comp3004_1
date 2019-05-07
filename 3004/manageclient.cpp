#include "manageclient.h"
#include "ui_addclient.h"

int clientId;
addClient::addClient(int *i):
    ui(new Ui::addClient)
{
    ui->setupUi(this);
    clientId = *i;


    QSqlQuery qry(QSqlDatabase::database("db1"));
    QString s = "select exists(select * from clients where id = :d)";
    qry.prepare(s);
    qry.bindValue(":d",clientId);
    if (qry.exec()){
        while (qry.next()){

            if (qry.value(0).toInt()==1){

              s = "select * from clients where id = :d";
              qry.prepare(s);
              qry.bindValue(":d",clientId);
              if (qry.exec()){
                  while (qry.next()){
                      setLine1Text(qry.value(1).toString());
                      setLine2Text(qry.value(2).toString());
                      setLine3Text(qry.value(3).toString());
                  }

}
            }
        }

}
}

addClient::~addClient()
{
    delete ui;
}

void addClient::on_buttonBox_accepted()
{
     QSqlQuery qry(QSqlDatabase::database("db1"));
    QString name,address,phoneNumber,s;

    name = ui->lineEdit->text().trimmed();
    address = ui->lineEdit_2->text().trimmed();
    phoneNumber = ui->lineEdit_3->text().trimmed();




    s = "insert or replace into clients (id,name,address,phoneNumber)values(:i,:n,:a,:p)";

    qry.prepare(s);
    qry.bindValue(":i",clientId);
    qry.bindValue(":n",name);
    qry.bindValue(":a",address);
    qry.bindValue(":p",phoneNumber);
    qry.exec();

    addClientPhysicalPref z(&clientId);
    z.setModal(true);
    z.exec();


    close();

}
void addClient::setLine1Text(QString s){
    ui->lineEdit->setText(s);

}
void addClient::setLine2Text(QString s){
   ui->lineEdit_2->setText(s);
}
void addClient::setLine3Text(QString s){

    ui->lineEdit_3->setText(s);
}

QString addClient::getLine1Text(){
    return ui->lineEdit->text();
}
QString addClient::getLine2Text(){
    return ui->lineEdit_2->text();
}
QString addClient::getLine3Text(){
    return ui->lineEdit_3->text();
}










