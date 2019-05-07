#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <staffwindow.h>
#include <clientwindow.h>



namespace Ui {
class loginWindow;
}

class loginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit loginWindow(QWidget *parent = 0);
    ~loginWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::loginWindow *ui;


};

#endif // LOGINWINDOW_H
