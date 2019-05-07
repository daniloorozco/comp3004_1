/********************************************************************************
** Form generated from reading UI file 'addclientphysicalpref.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENTPHYSICALPREF_H
#define UI_ADDCLIENTPHYSICALPREF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_addClientPhysicalPref
{
public:
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_2;
    QComboBox *comboBox_4;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label_5;

    void setupUi(QDialog *addClientPhysicalPref)
    {
        if (addClientPhysicalPref->objectName().isEmpty())
            addClientPhysicalPref->setObjectName(QStringLiteral("addClientPhysicalPref"));
        addClientPhysicalPref->resize(525, 246);
        lineEdit_5 = new QLineEdit(addClientPhysicalPref);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(270, 100, 113, 25));
        label_7 = new QLabel(addClientPhysicalPref);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 80, 71, 17));
        label_2 = new QLabel(addClientPhysicalPref);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 10, 64, 17));
        lineEdit_4 = new QLineEdit(addClientPhysicalPref);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 180, 113, 25));
        label = new QLabel(addClientPhysicalPref);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 64, 17));
        label_8 = new QLabel(addClientPhysicalPref);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(410, 80, 81, 17));
        label_9 = new QLabel(addClientPhysicalPref);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 160, 81, 17));
        label_3 = new QLabel(addClientPhysicalPref);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 10, 64, 17));
        comboBox_3 = new QComboBox(addClientPhysicalPref);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(400, 100, 101, 25));
        label_6 = new QLabel(addClientPhysicalPref);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 80, 101, 17));
        lineEdit_2 = new QLineEdit(addClientPhysicalPref);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 30, 113, 25));
        buttonBox = new QDialogButtonBox(addClientPhysicalPref);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(340, 210, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_4 = new QLabel(addClientPhysicalPref);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(410, 10, 64, 17));
        lineEdit_3 = new QLineEdit(addClientPhysicalPref);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(250, 30, 113, 25));
        comboBox_2 = new QComboBox(addClientPhysicalPref);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 100, 111, 25));
        comboBox_4 = new QComboBox(addClientPhysicalPref);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(150, 100, 101, 25));
        lineEdit = new QLineEdit(addClientPhysicalPref);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 113, 25));
        comboBox = new QComboBox(addClientPhysicalPref);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(390, 30, 86, 25));
        label_5 = new QLabel(addClientPhysicalPref);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 80, 64, 17));

        retranslateUi(addClientPhysicalPref);

        QMetaObject::connectSlotsByName(addClientPhysicalPref);
    } // setupUi

    void retranslateUi(QDialog *addClientPhysicalPref)
    {
        addClientPhysicalPref->setWindowTitle(QApplication::translate("addClientPhysicalPref", "Client Physical Preferences", Q_NULLPTR));
        label_7->setText(QApplication::translate("addClientPhysicalPref", "Coat Type", Q_NULLPTR));
        label_2->setText(QApplication::translate("addClientPhysicalPref", "Type", Q_NULLPTR));
        label->setText(QApplication::translate("addClientPhysicalPref", "Age", Q_NULLPTR));
        label_8->setText(QApplication::translate("addClientPhysicalPref", "Coat Length", Q_NULLPTR));
        label_9->setText(QApplication::translate("addClientPhysicalPref", "Color", Q_NULLPTR));
        label_3->setText(QApplication::translate("addClientPhysicalPref", "breed", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("addClientPhysicalPref", "Short", Q_NULLPTR)
         << QApplication::translate("addClientPhysicalPref", "Medium", Q_NULLPTR)
         << QApplication::translate("addClientPhysicalPref", "Long", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("addClientPhysicalPref", "hypoallergenic", Q_NULLPTR));
        label_4->setText(QApplication::translate("addClientPhysicalPref", "Gender", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("addClientPhysicalPref", "Small", Q_NULLPTR)
         << QApplication::translate("addClientPhysicalPref", "Medium", Q_NULLPTR)
         << QApplication::translate("addClientPhysicalPref", "Big", Q_NULLPTR)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("addClientPhysicalPref", "Little", Q_NULLPTR)
         << QApplication::translate("addClientPhysicalPref", "Moderate", Q_NULLPTR)
         << QApplication::translate("addClientPhysicalPref", "High", Q_NULLPTR)
        );
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("addClientPhysicalPref", "male", Q_NULLPTR)
         << QApplication::translate("addClientPhysicalPref", "female", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("addClientPhysicalPref", "Size", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addClientPhysicalPref: public Ui_addClientPhysicalPref {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENTPHYSICALPREF_H
