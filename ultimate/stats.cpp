#include "stats.h"
#include "ui_stats.h"

Stats::Stats(QWidget *parent, roster &r) :
    QDialog(parent),
    ui(new Ui::Stats),
    ours(r)
{
    ui->setupUi(this);
    fillTable();

}

Stats::~Stats()
{
    delete ui;
}

void Stats::fillTable() {
    for (player p : ours.team) {
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString(p.name_.c_str())));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(QString::number(p.ds_)));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(QString::number(p.throwaways_)));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(QString::number(p.assists_)));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 4, new QTableWidgetItem(QString::number(p.goals_)));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 5, new QTableWidgetItem(QString::number(p.completions_)));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 6, new QTableWidgetItem(QString::number(p.touches_)));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 7, new QTableWidgetItem(QString::number(p.catches_)));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 8, new QTableWidgetItem(QString::number(p.drops_)));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 9, new QTableWidgetItem(QString::number(p.recYards_)));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 10, new QTableWidgetItem(QString::number(p.throwYards_)));

    }
}

void Stats::on_pushButton_clicked()
{
    close();
    parentWidget()->show();
}
