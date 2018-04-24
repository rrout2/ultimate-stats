#include "defense.h"
#include "ui_defense.h"

Defense::Defense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Defense)
{
    ui->setupUi(this);
}

Defense::~Defense()
{
    delete ui;
}
