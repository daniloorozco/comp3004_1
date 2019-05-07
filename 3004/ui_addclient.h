/********************************************************************************
** Form generated from reading UI file 'addclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENT_H
#define UI_ADDCLIENT_H

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

class Ui_addClient
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *addClient)
    {
        if (addClient->objectName().isEmpty())
            addClient->setObjectName(QStringLiteral("addClient"));
        addClient->resize(591, 320);
        buttonBox = new QDialogButtonBox(addClient);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-40, 280, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(addClient);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 100, 113, 25));
        lineEdit_2 = new QLineEdit(addClient);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(260, 100, 113, 25));
        lineEdit_3 = new QLineEdit(addClient);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(410, 100, 113, 25));
        label = new QLabel(addClient);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 70, 64, 17));
        label_2 = new QLabel(addClient);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 70, 64, 17));
        label_3 = new QLabel(addClient);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(410, 70, 111, 17));

        retranslateUi(addClient);
        QObject::connect(buttonBox, SIGNAL(accepted()), addClient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addClient, SLOT(reject()));

        QMetaObject::connectSlotsByName(addClient);
    } // setupUi

    void retranslateUi(QDialog *addClient)
    {
        addClient->setWindowTitle(QApplication::translate("addClient", "Client Contact Info", Q_NULLPTR));
        label->setText(QApplication::translate("addClient", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("addClient", "Address", Q_NULLPTR));
        label_3->setText(QApplication::translate("addClient", "Phone number", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addClient: public Ui_addClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENT_H
