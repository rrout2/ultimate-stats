#ifndef CHOOSESIDE_H
#define CHOOSESIDE_H

#include <QDialog>
#include "roster.h"
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
//    chooseside(roster &r);

private slots:
    void on_pushButton_3_clicked();

private:
    roster ours;
    std::vector<player> line;
    Ui::chooseside *ui;
    void load_checked_names();
};

#endif // CHOOSESIDE_H
