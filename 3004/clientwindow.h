#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QListWidgetItem>
#include <manageclient.h>

namespace Ui {
class clientWindow;
}

class clientWindow : public QDialog
{
    Q_OBJECT

public:
   // explicit clientWindow(QWidget *parent = 0);
    clientWindow(int*);
    ~clientWindow();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);
    void updateView();

    void on_pushButton_clicked();

private:
    Ui::clientWindow *ui;
};

#endif // CLIENTWINDOW_H
