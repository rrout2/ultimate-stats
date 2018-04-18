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

void MainWindow::on_lineEdit_returnPressed() // add new person to roster
{
    QString qs = ui->lineEdit->text();
    std::string norm = qs.toUtf8().constData();
    if (norm == "") { // no empty name
        return;
    }
    for (auto pl : ours.team) { // makes sure no duplicate name
        if (pl.name_ == norm) {
            return;
        }
    }
    ours.team.push_back(player(norm));
    ui->lineEdit->setText(""); // resets text enter box

    qs = "";
    for(auto a : ours.team) {
        qs += a.name_.c_str();
        qs += "\n";
    }
    ui->label_2->setText(qs);
    qDebug() << "anotha";
}

void MainWindow::on_pushButton_clicked()
{
    ours.team.pop_back();
    QString qs = "";
    for(auto a : ours.team) {
        qs += a.name_.c_str();
        qs += "\n";
    }
    ui->label_2->setText(qs);
    qDebug() << "anotha";
}
