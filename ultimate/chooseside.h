#ifndef CHOOSESIDE_H
#define CHOOSESIDE_H

#include <QDialog>
#include "roster.h"
#include "offense.h"
#include "defense.h"
#include <vector>
namespace Ui {
class chooseside;
}

class chooseside : public QDialog
{
    Q_OBJECT

public:
    explicit chooseside(QWidget *parent = 0);
    chooseside(QWidget *parent, roster &r);
    ~chooseside();
    int *our_score;
    int *opp_score;


private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    int a = 0;
    int b = 0;
    roster ours;
    std::vector<player> line; // either empty or 7 people
    Ui::chooseside *ui;
    Offense *offense;
    Defense *defense;
    void load_checked_names();
};

#endif // CHOOSESIDE_H
