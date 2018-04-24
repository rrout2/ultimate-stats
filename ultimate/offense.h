#ifndef OFFENSE_H
#define OFFENSE_H

#include <QDialog>

namespace Ui {
class Offense;
}

class Offense : public QDialog
{
    Q_OBJECT

public:
    explicit Offense(QWidget *parent = 0);
    ~Offense();

private:
    Ui::Offense *ui;
};

#endif // OFFENSE_H
