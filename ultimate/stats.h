#ifndef STATS_H
#define STATS_H

#include <QDialog>
#include "roster.h"
namespace Ui {
class Stats;
}

class Stats : public QDialog
{
    Q_OBJECT

public:
    explicit Stats(QWidget *parent = 0);
    Stats(QWidget *parent, roster &r);
    ~Stats();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Stats *ui;
    roster ours;
    void fillTable();
};

#endif // STATS_H
