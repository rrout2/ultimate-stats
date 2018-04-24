#include "offense.h"
#include "ui_offense.h"

Offense::Offense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Offense)
{
    ui->setupUi(this);
}

Offense::~Offense()
{
    delete ui;
}
