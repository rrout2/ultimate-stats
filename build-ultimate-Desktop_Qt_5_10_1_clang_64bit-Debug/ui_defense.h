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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Defense
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QLabel *label;

    void setupUi(QDialog *Defense)
    {
        if (Defense->objectName().isEmpty())
            Defense->setObjectName(QStringLiteral("Defense"));
        Defense->resize(252, 457);
        pushButton = new QPushButton(Defense);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 80, 131, 32));
        pushButton_2 = new QPushButton(Defense);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 50, 113, 32));
        layoutWidget = new QWidget(Defense);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 120, 131, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_8);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_7);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        layoutWidget1 = new QWidget(Defense);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 120, 52, 236));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_9 = new QPushButton(layoutWidget1);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_7 = new QPushButton(layoutWidget1);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_8 = new QPushButton(layoutWidget1);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        label = new QLabel(Defense);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(59, 10, 111, 31));

        retranslateUi(Defense);

        QMetaObject::connectSlotsByName(Defense);
    } // setupUi

    void retranslateUi(QDialog *Defense)
    {
        Defense->setWindowTitle(QApplication::translate("Defense", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Defense", "Opp. Throwaway", nullptr));
        pushButton_2->setText(QApplication::translate("Defense", "Opp. Score", nullptr));
        label_8->setText(QString());
        label_7->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        label_4->setText(QString());
        label_3->setText(QString());
        label_2->setText(QString());
        pushButton_3->setText(QApplication::translate("Defense", "D", nullptr));
        pushButton_9->setText(QApplication::translate("Defense", "D", nullptr));
        pushButton_5->setText(QApplication::translate("Defense", "D", nullptr));
        pushButton_7->setText(QApplication::translate("Defense", "D", nullptr));
        pushButton_4->setText(QApplication::translate("Defense", "D", nullptr));
        pushButton_6->setText(QApplication::translate("Defense", "D", nullptr));
        pushButton_8->setText(QApplication::translate("Defense", "D", nullptr));
        label->setText(QApplication::translate("Defense", "<h1>Defense</h1>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Defense: public Ui_Defense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFENSE_H
