#ifndef ADDANIMALWINDOW_H
#define ADDANIMALWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <addnonphysical.h>

namespace Ui {
class addAnimalWindow;
}

class addAnimalWindow : public QDialog
{
    Q_OBJECT

public:
    explicit addAnimalWindow(QWidget *parent = 0);
    addAnimalWindow(int*);
    void setLine1Text(QString);
    void setLine2Text(QString);
    void setLine3Text(QString);
    void setLine4Text(QString);
    void setLine5Text(QString);
    void setLine6Text(QString);
    void setBox(QString);
    void setBox2(QString);
    void setBox3(QString);
    void setBox4(QString);

    ~addAnimalWindow();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addAnimalWindow *ui;
};

#endif // ADDANIMALWINDOW_H
