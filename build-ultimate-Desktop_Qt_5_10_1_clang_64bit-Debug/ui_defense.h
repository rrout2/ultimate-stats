/********************************************************************************
** Form generated from reading UI file 'defense.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFENSE_H
#define UI_DEFENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Defense
{
public:

    void setupUi(QDialog *Defense)
    {
        if (Defense->objectName().isEmpty())
            Defense->setObjectName(QStringLiteral("Defense"));
        Defense->resize(836, 486);

        retranslateUi(Defense);

        QMetaObject::connectSlotsByName(Defense);
    } // setupUi

    void retranslateUi(QDialog *Defense)
    {
        Defense->setWindowTitle(QApplication::translate("Defense", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Defense: public Ui_Defense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFENSE_H
