#include "offense.h"
#include "ui_offense.h"
#include <vector>
Offense::Offense(QWidget *parent, std::vector<player> &l) :
    QDialog(parent),
    ui(new Ui::Offense),
    line(l)
{
    ui->setupUi(this);
}

Offense::~Offense()
{
    delete ui;
}

