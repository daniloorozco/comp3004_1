#ifndef ADDNONPHYSICAL_H
#define ADDNONPHYSICAL_H

#include <QDialog>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
namespace Ui {
class addNonPhysical;
}

class addNonPhysical : public QDialog
{
    Q_OBJECT

public:
   // addNonPhysical(QWidget *parent = 0);
    addNonPhysical(int*);

    ~addNonPhysical();

private slots:
    void on_buttonBox_2_accepted();

private:
    Ui::addNonPhysical *ui;
};

#endif // ADDNONPHYSICAL_H
