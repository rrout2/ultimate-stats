#include "offense.h"
#include "ui_offense.h"
#include <vector>
#include <QDebug>

Offense::Offense(QWidget *parent, std::vector<player> &l) :
    QDialog(parent),
    ui(new Ui::Offense),
    line(l)
{
    ui->setupUi(this);
    loadNames();
    QPixmap endz("/Users/rishav/Downloads/green_rect.png");
    ui->label_9->setPixmap(endz);
    ui->label_10->setPixmap(endz);
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
