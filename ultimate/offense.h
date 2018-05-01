#ifndef OFFENSE_H
#define OFFENSE_H

#include <QDialog>
#include "vector"
#include "player.h"
namespace Ui {
class Offense;
}

class Offense : public QDialog
{
    Q_OBJECT

public:
    explicit Offense(QWidget *parent = 0);
    ~Offense();
    Offense(QWidget *parent, std::vector<player> &l, int *our_s, int * opp_s);
    void loadNames();
    player prev_hold; // who had the disc
    player curr_hold; // who has the disc
    int prev_loc;
    int vert_loc;
    int *our_score;
    int *opp_score;

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Offense *ui;
    std::vector<player> line; // 7 on the line
};

#endif // OFFENSE_H
