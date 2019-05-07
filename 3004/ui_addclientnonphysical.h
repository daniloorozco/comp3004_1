/********************************************************************************
** Form generated from reading UI file 'addclientnonphysical.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENTNONPHYSICAL_H
#define UI_ADDCLIENTNONPHYSICAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_addClientNonPhysical
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_6;
    QSlider *horizontalSlider_7;
    QSlider *horizontalSlider_8;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QComboBox *comboBox;

    void setupUi(QDialog *addClientNonPhysical)
    {
        if (addClientNonPhysical->objectName().isEmpty())
            addClientNonPhysical->setObjectName(QStringLiteral("addClientNonPhysical"));
        addClientNonPhysical->resize(551, 376);
        buttonBox = new QDialogButtonBox(addClientNonPhysical);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-80, 340, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addClientNonPhysical);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(35, 20, 91, 17));
        label_2 = new QLabel(addClientNonPhysical);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(34, 100, 101, 17));
        label_3 = new QLabel(addClientNonPhysical);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 60, 141, 71));
        label_4 = new QLabel(addClientNonPhysical);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 100, 151, 20));
        label_5 = new QLabel(addClientNonPhysical);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 260, 171, 20));
        label_6 = new QLabel(addClientNonPhysical);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 20, 191, 17));
        label_7 = new QLabel(addClientNonPhysical);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(330, 180, 64, 17));
        label_8 = new QLabel(addClientNonPhysical);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 180, 171, 20));
        label_9 = new QLabel(addClientNonPhysical);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(320, 250, 141, 41));
        horizontalSlider = new QSlider(addClientNonPhysical);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(30, 50, 160, 21));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(5);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);
        horizontalSlider->setTickInterval(1);
        horizontalSlider_2 = new QSlider(addClientNonPhysical);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(30, 120, 160, 21));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(5);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_2->setTickInterval(1);
        horizontalSlider_6 = new QSlider(addClientNonPhysical);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setGeometry(QRect(330, 130, 160, 21));
        horizontalSlider_6->setMinimum(1);
        horizontalSlider_6->setMaximum(5);
        horizontalSlider_6->setOrientation(Qt::Horizontal);
        horizontalSlider_6->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_6->setTickInterval(1);
        horizontalSlider_7 = new QSlider(addClientNonPhysical);
        horizontalSlider_7->setObjectName(QStringLiteral("horizontalSlider_7"));
        horizontalSlider_7->setGeometry(QRect(330, 210, 160, 21));
        horizontalSlider_7->setMinimum(1);
        horizontalSlider_7->setMaximum(5);
        horizontalSlider_7->setOrientation(Qt::Horizontal);
        horizontalSlider_7->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_7->setTickInterval(1);
        horizontalSlider_8 = new QSlider(addClientNonPhysical);
        horizontalSlider_8->setObjectName(QStringLiteral("horizontalSlider_8"));
        horizontalSlider_8->setGeometry(QRect(330, 280, 160, 21));
        horizontalSlider_8->setMinimum(1);
        horizontalSlider_8->setMaximum(5);
        horizontalSlider_8->setOrientation(Qt::Horizontal);
        horizontalSlider_8->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_8->setTickInterval(1);
        spinBox = new QSpinBox(addClientNonPhysical);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(70, 210, 49, 26));
        spinBox_2 = new QSpinBox(addClientNonPhysical);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(70, 300, 49, 26));
        comboBox = new QComboBox(addClientNonPhysical);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(360, 50, 131, 25));

        retranslateUi(addClientNonPhysical);
        QObject::connect(buttonBox, SIGNAL(accepted()), addClientNonPhysical, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addClientNonPhysical, SLOT(reject()));

        QMetaObject::connectSlotsByName(addClientNonPhysical);
    } // setupUi

    void retranslateUi(QDialog *addClientNonPhysical)
    {
        addClientNonPhysical->setWindowTitle(QApplication::translate("addClientNonPhysical", "Client Non-Physical Attributes", Q_NULLPTR));
        label->setText(QApplication::translate("addClientNonPhysical", "Free time", Q_NULLPTR));
        label_2->setText(QApplication::translate("addClientNonPhysical", "Activity Level", Q_NULLPTR));
        label_3->setText(QApplication::translate("addClientNonPhysical", "Ability to take pet ", Q_NULLPTR));
        label_4->setText(QApplication::translate("addClientNonPhysical", "for regular checkups", Q_NULLPTR));
        label_5->setText(QApplication::translate("addClientNonPhysical", "# of people in household", Q_NULLPTR));
        label_6->setText(QApplication::translate("addClientNonPhysical", "budget for pet care / month", Q_NULLPTR));
        label_7->setText(QApplication::translate("addClientNonPhysical", "Patience", Q_NULLPTR));
        label_8->setText(QApplication::translate("addClientNonPhysical", "# of pets in household", Q_NULLPTR));
        label_9->setText(QApplication::translate("addClientNonPhysical", "Free space at home", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("addClientNonPhysical", "20$ - 50$", Q_NULLPTR)
         << QApplication::translate("addClientNonPhysical", "50$ - 100$", Q_NULLPTR)
         << QApplication::translate("addClientNonPhysical", "100$ - 200$", Q_NULLPTR)
         << QApplication::translate("addClientNonPhysical", "200$+", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class addClientNonPhysical: public Ui_addClientNonPhysical {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENTNONPHYSICAL_H
