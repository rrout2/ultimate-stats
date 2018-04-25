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
    Offense(QWidget *parent, std::vector<player> &l);
    void loadNames();

private:
    Ui::Offense *ui;
    std::vector<player> line;
};

#endif // OFFENSE_H
