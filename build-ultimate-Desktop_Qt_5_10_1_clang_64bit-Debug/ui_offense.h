/********************************************************************************
** Form generated from reading UI file 'offense.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFENSE_H
#define UI_OFFENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Offense
{
public:
    QLabel *label;

    void setupUi(QDialog *Offense)
    {
        if (Offense->objectName().isEmpty())
            Offense->setObjectName(QStringLiteral("Offense"));
        Offense->resize(940, 498);
        label = new QLabel(Offense);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 20, 60, 16));

        retranslateUi(Offense);

        QMetaObject::connectSlotsByName(Offense);
    } // setupUi

    void retranslateUi(QDialog *Offense)
    {
        Offense->setWindowTitle(QApplication::translate("Offense", "Dialog", nullptr));
        label->setText(QApplication::translate("Offense", "O-Line", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Offense: public Ui_Offense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFENSE_H
