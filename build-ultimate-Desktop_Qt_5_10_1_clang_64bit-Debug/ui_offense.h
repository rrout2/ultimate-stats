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

QT_BEGIN_NAMESPACE

class Ui_Offense
{
public:

    void setupUi(QDialog *Offense)
    {
        if (Offense->objectName().isEmpty())
            Offense->setObjectName(QStringLiteral("Offense"));
        Offense->resize(864, 470);

        retranslateUi(Offense);

        QMetaObject::connectSlotsByName(Offense);
    } // setupUi

    void retranslateUi(QDialog *Offense)
    {
        Offense->setWindowTitle(QApplication::translate("Offense", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Offense: public Ui_Offense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFENSE_H
