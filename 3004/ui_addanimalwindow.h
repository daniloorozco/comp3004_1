/********************************************************************************
** Form generated from reading UI file 'addanimalwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDANIMALWINDOW_H
#define UI_ADDANIMALWINDOW_H

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

class Ui_addAnimalWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_4;
    QLabel *label_9;
    QComboBox *comboBox_4;
    QLineEdit *lineEdit_6;
    QLabel *label_10;

    void setupUi(QDialog *addAnimalWindow)
    {
        if (addAnimalWindow->objectName().isEmpty())
            addAnimalWindow->setObjectName(QStringLiteral("addAnimalWindow"));
        addAnimalWindow->resize(520, 248);
        buttonBox = new QDialogButtonBox(addAnimalWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(340, 220, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addAnimalWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 64, 17));
        label_2 = new QLabel(addAnimalWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 20, 64, 17));
        label_3 = new QLabel(addAnimalWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 20, 64, 17));
        label_4 = new QLabel(addAnimalWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(410, 20, 64, 17));
        lineEdit = new QLineEdit(addAnimalWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 113, 25));
        lineEdit_2 = new QLineEdit(addAnimalWindow);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 40, 113, 25));
        lineEdit_3 = new QLineEdit(addAnimalWindow);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(250, 40, 113, 25));
        label_5 = new QLabel(addAnimalWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 90, 64, 17));
        label_6 = new QLabel(addAnimalWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 90, 101, 17));
        label_7 = new QLabel(addAnimalWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 90, 71, 17));
        label_8 = new QLabel(addAnimalWindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(410, 90, 81, 17));
        lineEdit_5 = new QLineEdit(addAnimalWindow);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(270, 110, 113, 25));
        comboBox = new QComboBox(addAnimalWindow);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(390, 40, 86, 25));
        comboBox_2 = new QComboBox(addAnimalWindow);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 110, 111, 25));
        comboBox_3 = new QComboBox(addAnimalWindow);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(400, 110, 101, 25));
        lineEdit_4 = new QLineEdit(addAnimalWindow);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 190, 113, 25));
        label_9 = new QLabel(addAnimalWindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 170, 81, 17));
        comboBox_4 = new QComboBox(addAnimalWindow);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(150, 110, 101, 25));
        lineEdit_6 = new QLineEdit(addAnimalWindow);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(140, 190, 113, 25));
        label_10 = new QLabel(addAnimalWindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(160, 170, 81, 17));

        retranslateUi(addAnimalWindow);

        QMetaObject::connectSlotsByName(addAnimalWindow);
    } // setupUi

    void retranslateUi(QDialog *addAnimalWindow)
    {
        addAnimalWindow->setWindowTitle(QApplication::translate("addAnimalWindow", "Animal Physical Attributes", Q_NULLPTR));
        label->setText(QApplication::translate("addAnimalWindow", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("addAnimalWindow", "Type", Q_NULLPTR));
        label_3->setText(QApplication::translate("addAnimalWindow", "breed", Q_NULLPTR));
        label_4->setText(QApplication::translate("addAnimalWindow", "Gender", Q_NULLPTR));
        label_5->setText(QApplication::translate("addAnimalWindow", "Size", Q_NULLPTR));
        label_6->setText(QApplication::translate("addAnimalWindow", "hypoallergenic", Q_NULLPTR));
        label_7->setText(QApplication::translate("addAnimalWindow", "Coat Type", Q_NULLPTR));
        label_8->setText(QApplication::translate("addAnimalWindow", "Coat Length", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("addAnimalWindow", "male", Q_NULLPTR)
         << QApplication::translate("addAnimalWindow", "female", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("addAnimalWindow", "Small", Q_NULLPTR)
         << QApplication::translate("addAnimalWindow", "Medium", Q_NULLPTR)
         << QApplication::translate("addAnimalWindow", "Big", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("addAnimalWindow", "Short", Q_NULLPTR)
         << QApplication::translate("addAnimalWindow", "Medium", Q_NULLPTR)
         << QApplication::translate("addAnimalWindow", "Long", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("addAnimalWindow", "Color", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("addAnimalWindow", "Little", Q_NULLPTR)
         << QApplication::translate("addAnimalWindow", "Moderate", Q_NULLPTR)
         << QApplication::translate("addAnimalWindow", "High", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("addAnimalWindow", "Age", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addAnimalWindow: public Ui_addAnimalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMALWINDOW_H
