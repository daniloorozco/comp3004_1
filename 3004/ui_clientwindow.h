/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

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

QT_BEGIN_NAMESPACE

class Ui_clientWindow
{
public:
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QListWidget *listWidget_3;
    QListWidget *listWidget_2;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QDialog *clientWindow)
    {
        if (clientWindow->objectName().isEmpty())
            clientWindow->setObjectName(QStringLiteral("clientWindow"));
        clientWindow->resize(584, 362);
        textBrowser = new QTextBrowser(clientWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(180, 30, 401, 291));
        label_3 = new QLabel(clientWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 10, 64, 17));
        listWidget_3 = new QListWidget(clientWindow);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(370, 67, 201, 241));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Serif"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        listWidget_3->setFont(font);
        listWidget_2 = new QListWidget(clientWindow);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(189, 68, 171, 241));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Serif"));
        font1.setBold(false);
        font1.setWeight(50);
        listWidget_2->setFont(font1);
        pushButton = new QPushButton(clientWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 330, 83, 25));
        listWidget = new QListWidget(clientWindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 30, 121, 301));
        label = new QLabel(clientWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(22, 10, 64, 17));
        label_9 = new QLabel(clientWindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(450, 10, 91, 16));
        label_8 = new QLabel(clientWindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(310, 10, 131, 16));
        label_7 = new QLabel(clientWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(230, 10, 91, 16));
        label_6 = new QLabel(clientWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(400, 30, 141, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans"));
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_5 = new QLabel(clientWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 30, 131, 31));
        label_5->setFont(font2);
        label_2 = new QLabel(clientWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(398, 5, 64, 17));
        label_4 = new QLabel(clientWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(464, 5, 101, 17));

        retranslateUi(clientWindow);

        QMetaObject::connectSlotsByName(clientWindow);
    } // setupUi

    void retranslateUi(QDialog *clientWindow)
    {
        clientWindow->setWindowTitle(QApplication::translate("clientWindow", "Client Window", Q_NULLPTR));
        label_3->setText(QApplication::translate("clientWindow", "Info: ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("clientWindow", "Edit Info", Q_NULLPTR));
        label->setText(QApplication::translate("clientWindow", "Animals:", Q_NULLPTR));
        label_9->setText(QString());
        label_8->setText(QString());
        label_7->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        label_2->setText(QApplication::translate("clientWindow", "Welcome ", Q_NULLPTR));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class clientWindow: public Ui_clientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
