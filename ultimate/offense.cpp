#include "offense.h"
#include "ui_offense.h"
#include <vector>
#include <QDebug>
#include <iostream>
#include <sstream>

Offense::Offense(QWidget *parent, std::vector<player> &l) :
    QDialog(parent),
    ui(new Ui::Offense),
    line(l)
{
    ui->setupUi(this);
    loadNames();
    QPixmap endz("/Users/rishav/Downloads/green_rect.png");
//    ui->label_9->setPixmap(endz);
//    ui->label_10->setPixmap(endz);
}

Offense::~Offense()
{
    delete ui;
}

void Offense::loadNames() {
    ui->label_2->setText(line[0].name_.c_str());
    ui->label_3->setText(line[1].name_.c_str());
    ui->label_4->setText(line[2].name_.c_str());
    ui->label_5->setText(line[3].name_.c_str());
    ui->label_6->setText(line[4].name_.c_str());
    ui->label_7->setText(line[5].name_.c_str());
    ui->label_8->setText(line[6].name_.c_str());
}

void Offense::on_pushButton_4_clicked() // throwaway
{
    close();
    parentWidget()->show();
}

void Offense::on_pushButton_3_clicked() // drop
{
    close();
    parentWidget()->show();
}

void Offense::on_pushButton_2_clicked() // pick up
{
    bool found = false;
    for (int i = 0; i < ui->horizontalLayout->count(); i++) { // a player has to be checked
        QLayoutItem *item = ui->horizontalLayout->itemAt(i);
        QRadioButton *button = dynamic_cast<QRadioButton*>(item);
        if (button->isChecked()) {
            prev_hold = line[i];
            curr_hold = line[i];
            line[i].touches_++;
            found = true;
            break;
        }
    }
    if (!found) {
        return;
    }


    found = false;

    for (int i = 0; i < ui->gridLayout->count(); i++) {
        QLayoutItem *item = ui->gridLayout->itemAt(i);
        QRadioButton *button = dynamic_cast<QRadioButton*>(item);
        if (button->isChecked()) {
            QString qs_name = button->accessibleName();
            std::string name = qs_name.toUtf8().constData();
            std::stringstream geek(name);
            geek >> prev_loc;
            geek >> vert_loc;

        }
    }
}
