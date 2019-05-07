#ifndef MATCHWINDOW_H
#define MATCHWINDOW_H

#include <QDialog>

namespace Ui {
class matchWindow;
}

class matchWindow : public QDialog
{
    Q_OBJECT

public:
    explicit matchWindow(QWidget *parent = 0);
    void addToList(QString);
    ~matchWindow();

private:
    Ui::matchWindow *ui;
};

#endif // MATCHWINDOW_H
