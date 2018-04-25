#include "defense.h"
#include "ui_defense.h"

Defense::Defense(QWidget *parent, std::vector<player> &l) :
    QDialog(parent),
    ui(new Ui::Defense),
    line(l)
{
    ui->setupUi(this);
}

Defense::~Defense()
{
    delete ui;
}
