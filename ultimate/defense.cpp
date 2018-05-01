#include "defense.h"
#include "ui_defense.h"

Defense::Defense(QWidget *parent, std::vector<player *> l, int *our_s, int *opp_s) :
    QDialog(parent),
    ui(new Ui::Defense),
    line(l)
{
    ui->setupUi(this);
    loadNames();
    our_score = our_s;
    opp_score = opp_s;
}

Defense::~Defense()
{
    delete ui;
}

void Defense::loadNames() {
    ui->label_8->setText(line[0]->name_.c_str());
    ui->label_7->setText(line[1]->name_.c_str());
    ui->label_6->setText(line[2]->name_.c_str());
    ui->label_5->setText(line[3]->name_.c_str());
    ui->label_4->setText(line[4]->name_.c_str());
    ui->label_3->setText(line[5]->name_.c_str());
    ui->label_2->setText(line[6]->name_.c_str());
}

void Defense::on_pushButton_clicked() // opponent throwawy
{
    close();
    parentWidget()->show();
}

void Defense::on_pushButton_3_clicked() // pl1 D
{
    line[0]->ds_ += 1;
    close();
    parentWidget()->show();
}

void Defense::on_pushButton_9_clicked() // pl2 D
{
    line[1]->ds_ += 1;
    close();
    parentWidget()->show();
}

void Defense::on_pushButton_5_clicked() // pl3 D
{
    line[2]->ds_ += 1;
    close();
    parentWidget()->show();
}

void Defense::on_pushButton_7_clicked()
{
    line[3]->ds_ += 1;
    close();
    parentWidget()->show();
}

void Defense::on_pushButton_4_clicked()
{
    line[4]->ds_ += 1;
    close();
    parentWidget()->show();
}

void Defense::on_pushButton_6_clicked()
{
    line[5]->ds_ += 1;
    close();
    parentWidget()->show();
}

void Defense::on_pushButton_8_clicked()
{
    line[6]->ds_ += 1;
    close();
    parentWidget()->show();
}

void Defense::on_pushButton_2_clicked() // opp scores!
{
    (*opp_score) += 1;
    close();
    parentWidget()->show();
}
