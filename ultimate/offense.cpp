#include "offense.h"
#include "ui_offense.h"
#include <vector>
#include <QDebug>
#include <iostream>
#include <sstream>

Offense::Offense(QWidget *parent, std::vector<player> &l, int *our_s, int *opp_s) :
    QDialog(parent),
    ui(new Ui::Offense),
    line(l)
{
    ui->setupUi(this);
    loadNames();
    QPixmap endz("/Users/rishav/Downloads/green_rect.png");
//    ui->label_9->setPixmap(endz);
//    ui->label_10->setPixmap(endz);
    our_score = our_s;
    opp_score = opp_s;
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
    curr_hold.throwaways_++;
    close();
    parentWidget()->show();
}

void Offense::on_pushButton_3_clicked() // drop
{
    curr_hold.drops_++;
    close();
    parentWidget()->show();
}

void Offense::on_pushButton_2_clicked() // pick up
{
    bool found = false;
    for (int i = 0; i < ui->horizontalLayout->count(); i++) { // a player has to be checked
        QWidget *wid = ui->horizontalLayout->itemAt(i)->widget();
        QRadioButton *button = dynamic_cast<QRadioButton*>(wid);
        if(!button) {
            continue;
        }
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
        QWidget *item = ui->gridLayout->itemAt(i)->widget();
        QRadioButton *button = dynamic_cast<QRadioButton*>(item);
        if (button->isChecked()) {
            QString qs_name = button->accessibleName();
            std::string name = qs_name.toUtf8().constData();
            std::stringstream conv(name);
            conv >> prev_loc;
            conv >> vert_loc;

        }
    }
}

void Offense::on_pushButton_clicked() // catch
{
    bool found = false;
    for (int i = 0; i < ui->horizontalLayout->count(); i++) { // a player has to be checked
        QWidget *wid = ui->horizontalLayout->itemAt(i)->widget();
        QRadioButton *button = dynamic_cast<QRadioButton*>(wid);
        if(!button) {
            continue;
        }
        if (button->isChecked()) {
            prev_hold = curr_hold;
            curr_hold = line[i];
            line[i].touches_++;
            found = true;
            break;
        }
    }
    if (!found) {
        return;
    }

    bool scored = false;

    for (int i = 0; i < ui->gridLayout->count(); i++) {
        QWidget *item = ui->gridLayout->itemAt(i)->widget();
        QRadioButton *button = dynamic_cast<QRadioButton*>(item);
        if (button->isChecked()) {
            QString qs_name = button->accessibleName();
            std::string name = qs_name.toUtf8().constData();
            std::stringstream conv(name);
            prev_loc = vert_loc;
            conv >> vert_loc;

            if (button->accessibleDescription().toUtf8().constData()) {
                QString q = button->accessibleDescription();
                std::string n = q.toUtf8().constData();
                std::stringstream co(n);
                if (n == "score") {
                    scored = true;
                }
            }

            break;
        }
    }

    int yards_gained = vert_loc - prev_loc;
    curr_hold.recYards_ += yards_gained;
    prev_hold.throwYards_ += yards_gained;

    if (scored) {
        curr_hold.goals_ += 1;
        prev_hold.assists_ += 1;
        ++(*our_score);
        close();
        parentWidget()->show();
    }
}
