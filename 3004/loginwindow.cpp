#include "loginwindow.h"
#include "ui_loginwindow.h"



loginWindow::loginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginWindow)
{
    ui->setupUi(this);

    QString dbPath = "shelter.db";

    QSqlDatabase db = QSqlDatabase :: addDatabase("QSQLITE","db1"); // create database with connection name db1
    db.setDatabaseName (dbPath);
    if (db.open()){
        qDebug()<<"Database is now connected";
    }


}

loginWindow::~loginWindow()
{
    delete ui;
}

void loginWindow::on_pushButton_clicked()
{
    int id;
    bool foundClient = 0;
    QString username = ui->lineEdit->text();
    QString s = "select id,name from clients;";
    QSqlQuery qry(QSqlDatabase::database("db1"));

    if (qry.exec(s)){
        while (qry.next()){
            if (username==qry.value(1).toString()){
                id = qry.value(0).toInt();
                foundClient = 1;
                break;

            }

        }

    }
    if (!foundClient){          // if client is not found in database, open staff window
    staffWindow w;
    w.setModal(true);
   close();
    w.exec();
}

    else {
    clientWindow w(&id);    // if client is found in database, open client window
    w.setModal(true);
    close();
    w.exec();


    }












}
