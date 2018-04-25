#include "defense.h"
#include "ui_defense.h"

Defense::Defense(QWidget *parent, std::vector<player> &l) :
    QDialog(parent),
    ui(new Ui::Defense),
    line(l)
{
    ui->setupUi(this);
    loadNames();
}

Defense::~Defense()
{
    delete ui;
}

void Defense::loadNames() {
    ui->label_8->setText(line[0].name_.c_str());
    ui->label_7->setText(line[1].name_.c_str());
    ui->label_6->setText(line[2].name_.c_str());
    ui->label_5->setText(line[3].name_.c_str());
    ui->label_4->setText(line[4].name_.c_str());
    ui->label_3->setText(line[5].name_.c_str());
    ui->label_2->setText(line[6].name_.c_str());
}

void Defense::on_pushButton_clicked()
{

}
