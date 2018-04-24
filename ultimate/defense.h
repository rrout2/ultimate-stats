#ifndef DEFENSE_H
#define DEFENSE_H

#include <QDialog>

namespace Ui {
class Defense;
}

class Defense : public QDialog
{
    Q_OBJECT

public:
    explicit Defense(QWidget *parent = 0);
    ~Defense();

private:
    Ui::Defense *ui;
};

#endif // DEFENSE_H
