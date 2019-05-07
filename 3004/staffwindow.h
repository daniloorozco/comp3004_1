#ifndef STAFFWINDOW_H
#define STAFFWINDOW_H

#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QListWidgetItem>
#include <QDialog>
#include <animalphyspref.h>
#include <manageclient.h>
#include <matchwindow.h>
#include <QList>
#include <QMap>
#include <QtMath>


namespace Ui {
class staffWindow;
}

class staffWindow : public QDialog
{
    Q_OBJECT

public:
    explicit staffWindow(QWidget *parent = 0);
    ~staffWindow();

private slots:

    void on_listWidget_itemPressed(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void updateView();

    void on_pushButton_3_clicked();

    void on_listWidget_4_itemClicked(QListWidgetItem *item);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();
    void  getPoints(QString*,int,matchWindow*);

private:
    Ui::staffWindow *ui;

};

#endif // STAFFWINDOW_H
