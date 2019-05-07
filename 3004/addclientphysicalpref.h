#ifndef ADDCLIENTPHYSICALPREF_H
#define ADDCLIENTPHYSICALPREF_H

#include <QDialog>
#include <QtSql>
#include <addnonphysical.h>
#include <addclientnonphysical.h>
namespace Ui {
class addClientPhysicalPref;
}

class addClientPhysicalPref : public QDialog
{
    Q_OBJECT

public:
    explicit addClientPhysicalPref(int*);
    ~addClientPhysicalPref();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addClientPhysicalPref *ui;
};

#endif // ADDCLIENTPHYSICALPREF_H
