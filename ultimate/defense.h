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

private:
    Ui::Defense *ui;
    std::vector<player> line;
};

#endif // DEFENSE_H
