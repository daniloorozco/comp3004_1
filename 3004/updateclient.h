#ifndef UPDATECLIENT_H
#define UPDATECLIENT_H

#include <QDialog>
#include <QtSql>
namespace Ui {
class updateClient;
}

class updateClient : public QDialog
{
    Q_OBJECT

public:
    explicit updateClient(QWidget *parent = 0);

    ~updateClient();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::updateClient *ui;
};

#endif // UPDATECLIENT_H
