/********************************************************************************
** Form generated from reading UI file 'staffwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFWINDOW_H
#define UI_STAFFWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_staffWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QListWidget *listWidget;
    QLabel *label_7;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QListWidget *listWidget_4;
    QTextBrowser *textBrowser;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_5;
    QToolBar *mainToolBar;

    void setupUi(QDialog *staffWindow)
    {
        if (staffWindow->objectName().isEmpty())
            staffWindow->setObjectName(QStringLiteral("staffWindow"));
        staffWindow->resize(658, 326);
        centralWidget = new QWidget(staffWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 641, 320));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(364, 295, 90, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 64, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 0, 64, 17));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 295, 90, 21));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(457, 295, 90, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 0, 64, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 30, 131, 31));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(450, 30, 141, 31));
        label_6->setFont(font);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 121, 291));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(310, 0, 91, 16));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(282, 70, 150, 211));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Serif"));
        font1.setBold(false);
        font1.setWeight(50);
        listWidget_2->setFont(font1);
        listWidget_3 = new QListWidget(centralWidget);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(452, 70, 170, 211));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Serif"));
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        listWidget_3->setFont(font2);
        listWidget_4 = new QListWidget(centralWidget);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));
        listWidget_4->setGeometry(QRect(140, 20, 121, 291));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(270, 20, 371, 271));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(390, 0, 131, 16));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(530, 0, 91, 16));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(550, 295, 90, 21));
        textBrowser->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        listWidget->raise();
        label_7->raise();
        listWidget_2->raise();
        listWidget_3->raise();
        listWidget_4->raise();
        label_8->raise();
        label_9->raise();
        pushButton_5->raise();
        mainToolBar = new QToolBar(staffWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 8, 17));

        retranslateUi(staffWindow);

        QMetaObject::connectSlotsByName(staffWindow);
    } // setupUi

    void retranslateUi(QDialog *staffWindow)
    {
        staffWindow->setWindowTitle(QApplication::translate("staffWindow", "Staff Window", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("staffWindow", "Add Animal", Q_NULLPTR));
        label->setText(QApplication::translate("staffWindow", "Animals", Q_NULLPTR));
        label_2->setText(QApplication::translate("staffWindow", "Clients", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("staffWindow", "Add Client", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("staffWindow", "Edit Animal", Q_NULLPTR));
        label_3->setText(QApplication::translate("staffWindow", "Info: ", Q_NULLPTR));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        pushButton_5->setText(QApplication::translate("staffWindow", "Run ACM", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class staffWindow: public Ui_staffWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFWINDOW_H
