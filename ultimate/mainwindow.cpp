#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "roster.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_returnPressed()
{
    QString qs = ui->lineEdit->text();
    std::string norm = qs.toUtf8().constData();
    ours.team.push_back(player(norm));
}

void MainWindow::on_pushButton_clicked()
{
    for(auto a : ours.team) {
        const char * s = a.name_.c_str();
        qDebug() << s;
    }
    qDebug() << "\n";

}
