#include "chooseside.h"
#include "ui_chooseside.h"
//#include "roster.h"
#include <QtCore>
#include <QtGui>
chooseside::chooseside(QWidget *parent, roster &r) :
    QDialog(parent),
    ours(r),
    ui(new Ui::chooseside)
{
    ui->setupUi(this);
    load_checked_names();
}

chooseside::~chooseside()
{
    delete ui;
}

void chooseside::load_checked_names() { // called from constructor
    if (!ours.team.empty()) {
        ui->label_1->setText(ours.team[0].name_.c_str());
    } else {
        ui->checkBox_1->hide();
    }
    int size = ours.team.size();
    if (size >= 1 + 1) {
        ui->label_2->setText(ours.team[1].name_.c_str());
    } else {
        ui->checkBox_2->hide();
    }
    if (size >= 2 + 1) {
        ui->label_3->setText(ours.team[2].name_.c_str());
    } else {
        ui->checkBox_3->hide();
    }
    if (size >= 3 + 1) {
        ui->label_4->setText(ours.team[3].name_.c_str());
    } else {
        ui->checkBox_4->hide();
    }
    if (size >= 4 + 1) {
        ui->label_5->setText(ours.team[4].name_.c_str());
    } else {
        ui->checkBox_5->hide();
    }
    if (size >= 5 + 1) {
        ui->label_6->setText(ours.team[5].name_.c_str());
    } else {
        ui->checkBox_6->hide();
    }
    if (size >= 6 + 1) {
        ui->label_7->setText(ours.team[6].name_.c_str());
    } else {
        ui->checkBox_7->hide();
    }
    if (size >= 7 + 1) {
        ui->label_8->setText(ours.team[7].name_.c_str());
    } else {
        ui->checkBox_8->hide();
    }
    if (size >= 8 + 1) {
        ui->label_9->setText(ours.team[8].name_.c_str());
    } else {
        ui->checkBox_9->hide();
    }
    if (size >= 9 + 1) {
        ui->label_10->setText(ours.team[9].name_.c_str());
    } else {
        ui->checkBox_10->hide();
    }
    if (size >= 10 + 1) {
        ui->label_11->setText(ours.team[10].name_.c_str());
    } else {
        ui->checkBox_11->hide();
    }
    if (size >= 11 + 1) {
        ui->label_12->setText(ours.team[11].name_.c_str());
    } else {
        ui->checkBox_12->hide();
    }
    if (size >= 12 + 1) {
        ui->label_13->setText(ours.team[12].name_.c_str());
    } else {
        ui->checkBox_13->hide();
    }
    if (size >= 13 + 1) {
        ui->label_14->setText(ours.team[13].name_.c_str());
    } else {
        ui->checkBox_14->hide();
    }
    if (size >= 14 + 1) {
        ui->label_15->setText(ours.team[14].name_.c_str());
    } else {
        ui->checkBox_15->hide();
    }
    if (size >= 15 + 1) {
        ui->label_16->setText(ours.team[15].name_.c_str());
    } else {
        ui->checkBox_16->hide();
    }
    if (size >= 16 + 1) {
        ui->label_17->setText(ours.team[16].name_.c_str());
    } else {
        ui->checkBox_17->hide();
    }
    if (size >= 17 + 1) {
        ui->label_18->setText(ours.team[17].name_.c_str());
    } else {
        ui->checkBox_18->hide();
    }
    if (size >= 18 + 1) {
        ui->label_19->setText(ours.team[18].name_.c_str());
    } else {
        ui->checkBox_19->hide();
    }
    if (size >= 19 + 1) {
        ui->label_20->setText(ours.team[19].name_.c_str());
    } else {
        ui->checkBox_20->hide();
    }
    if (size >= 20 + 1) {
        ui->label_21->setText(ours.team[20].name_.c_str());
    } else {
        ui->checkBox_21->hide();
    }
}

void chooseside::on_pushButton_3_clicked() // confirm line button
{
    if (ui->checkBox_1->isChecked()) {
        line.push_back(ours.team[0]);
    }
    if (ui->checkBox_2->isChecked()) {
        line.push_back(ours.team[1]);
    }
    if (ui->checkBox_3->isChecked()) {
        line.push_back(ours.team[2]);
    }
    if (ui->checkBox_4->isChecked()) {
        line.push_back(ours.team[3]);
    }
    if (ui->checkBox_5->isChecked()) {
        line.push_back(ours.team[4]);
    }
    if (ui->checkBox_6->isChecked()) {
        line.push_back(ours.team[5]);
    }
    if (ui->checkBox_7->isChecked()) {
        line.push_back(ours.team[6]);
    }
    if (ui->checkBox_8->isChecked()) {
        line.push_back(ours.team[7]);
    }
    if (ui->checkBox_9->isChecked()) {
        line.push_back(ours.team[8]);
    }
    if (ui->checkBox_10->isChecked()) {
        line.push_back(ours.team[9]);
    }
    if (ui->checkBox_11->isChecked()) {
        line.push_back(ours.team[10]);
    }
    if (ui->checkBox_12->isChecked()) {
        line.push_back(ours.team[11]);
    }
    if (ui->checkBox_13->isChecked()) {
        line.push_back(ours.team[12]);
    }
    if (ui->checkBox_14->isChecked()) {
        line.push_back(ours.team[13]);
    }
    if (ui->checkBox_15->isChecked()) {
        line.push_back(ours.team[14]);
    }
    if (ui->checkBox_16->isChecked()) {
        line.push_back(ours.team[15]);
    }
    if (ui->checkBox_17->isChecked()) {
        line.push_back(ours.team[16]);
    }
    if (ui->checkBox_18->isChecked()) {
        line.push_back(ours.team[17]);
    }
    if (ui->checkBox_19->isChecked()) {
        line.push_back(ours.team[18]);
    }
    if (ui->checkBox_20->isChecked()) {
        line.push_back(ours.team[19]);
    }
    if (ui->checkBox_21->isChecked()) {
        line.push_back(ours.team[20]);
    }
    if (line.size() != 7) {
        ui->myLine->setText("Must have 7 \nplayers \nchecked");
        line.clear();
    } else {
        ui->myLine->setText("");
        for (auto a : line) {
            ui->myLine->setText(ui->myLine->text() + a.name_.c_str() + "\n");
        }
    }
}

void chooseside::on_pushButton_4_clicked() // back button
{
    hide();
    parentWidget()->show();
}

void chooseside::on_pushButton_5_clicked() // to offense screen
{
    if (line.size() != 7) {
        return;
    }
    hide();
    offense = new Offense(this, line);
    offense->show();
}

void chooseside::on_pushButton_2_clicked()
{
    if (line.size() != 7) {
        return;
    }
    hide();
    defense = new Defense(this, line);
    defense->show();
}
