/********************************************************************************
** Form generated from reading UI file 'updateclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATECLIENT_H
#define UI_UPDATECLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_updateClient
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;

    void setupUi(QDialog *updateClient)
    {
        if (updateClient->objectName().isEmpty())
            updateClient->setObjectName(QStringLiteral("updateClient"));
        updateClient->resize(543, 245);
        buttonBox = new QDialogButtonBox(updateClient);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-80, 210, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(updateClient);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 80, 113, 25));
        label = new QLabel(updateClient);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 64, 17));
        label_2 = new QLabel(updateClient);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 50, 64, 17));
        lineEdit_2 = new QLineEdit(updateClient);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 80, 113, 25));
        lineEdit_3 = new QLineEdit(updateClient);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(370, 80, 113, 25));
        label_3 = new QLabel(updateClient);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(370, 50, 111, 17));

        retranslateUi(updateClient);
        QObject::connect(buttonBox, SIGNAL(accepted()), updateClient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), updateClient, SLOT(reject()));

        QMetaObject::connectSlotsByName(updateClient);
    } // setupUi

    void retranslateUi(QDialog *updateClient)
    {
        updateClient->setWindowTitle(QApplication::translate("updateClient", "Contact Info", Q_NULLPTR));
        label->setText(QApplication::translate("updateClient", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("updateClient", "Address", Q_NULLPTR));
        label_3->setText(QApplication::translate("updateClient", "Phone number", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updateClient: public Ui_updateClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATECLIENT_H
