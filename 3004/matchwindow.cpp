#include "matchwindow.h"
#include "ui_matchwindow.h"

matchWindow::matchWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::matchWindow)
{
    ui->setupUi(this);
}

matchWindow::~matchWindow()
{
    delete ui;
}

void matchWindow::addToList(QString s){
    ui->listWidget->addItem(s);
}
