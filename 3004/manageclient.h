#ifndef ADDCLIENT_H
#define ADDCLIENT_H

#include <QDialog>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <addclientphysicalpref.h>

namespace Ui {
class addClient;
}

class addClient : public QDialog
{
    Q_OBJECT

public:
    explicit addClient(QWidget *parent = 0);
    addClient(int*);
    void setLine1Text(QString);
    void setLine2Text(QString);
    void setLine3Text(QString);
    QString getLine1Text();
    QString getLine2Text();
    QString getLine3Text();


    ~addClient();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addClient *ui;
};

#endif // ADDCLIENT_H
