#ifndef ADDCLIENTNONPHYSICAL_H
#define ADDCLIENTNONPHYSICAL_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class addClientNonPhysical;
}

class addClientNonPhysical : public QDialog
{
    Q_OBJECT

public:
    explicit addClientNonPhysical(int*);
    ~addClientNonPhysical();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addClientNonPhysical *ui;
};

#endif // ADDCLIENTNONPHYSICAL_H
