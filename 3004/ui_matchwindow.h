/********************************************************************************
** Form generated from reading UI file 'matchwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATCHWINDOW_H
#define UI_MATCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_matchWindow
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *matchWindow)
    {
        if (matchWindow->objectName().isEmpty())
            matchWindow->setObjectName(QStringLiteral("matchWindow"));
        matchWindow->resize(373, 377);
        listWidget = new QListWidget(matchWindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 381, 381));

        retranslateUi(matchWindow);

        QMetaObject::connectSlotsByName(matchWindow);
    } // setupUi

    void retranslateUi(QDialog *matchWindow)
    {
        matchWindow->setWindowTitle(QApplication::translate("matchWindow", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class matchWindow: public Ui_matchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATCHWINDOW_H
