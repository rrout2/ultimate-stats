#ifndef DEFENSE_H
#define DEFENSE_H

#include <QDialog>
#include <vector>
#include "player.h"
namespace Ui {
class Defense;
}

class Defense : public QDialog
{
    Q_OBJECT

public:
    explicit Defense(QWidget *parent = 0);
    Defense(QWidget *parent, std::vector<player> &l);
    ~Defense();
    void loadNames();

private slots:
//    void on_pushButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Defense *ui;
    std::vector<player> line;
};

#endif // DEFENSE_H
