#include "updateclient.h"
#include "ui_updateclient.h"

updateClient::updateClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateClient)
{
    ui->setupUi(this);
}

updateClient::~updateClient()
{
    delete ui;
}

void updateClient::on_buttonBox_accepted()
{

    QSqlQuery qry(QSqlDatabase::database("db1"));

    QString s,address,phone,name = getLine1Text();;

    address = getLine2Text();
    phone = getLine3Text();

     s = "update clients set name=:n,address=:a,phoneNumber=:p where name = :n";

     qry.prepare(s);
     qry.bindValue(":n",name);
     qry.bindValue(":a",address);
     qry.bindValue(":p",phone);
   if ( qry.exec()){
       qDebug()<<"Client update successful";
   }
    close();

}
