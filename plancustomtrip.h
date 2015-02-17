#ifndef PLANCUSTOMTRIP_H
#define PLANCUSTOMTRIP_H

#include <QDialog>
#include "displaytrip.h"

namespace Ui {
class planCustomTrip;
}

class planCustomTrip : public QDialog
{
    Q_OBJECT

public:
    explicit planCustomTrip(QWidget *parent = 0);
    ~planCustomTrip();

private slots:
    void on_pushButton_clicked();

private:
    Ui::planCustomTrip *ui;
    QWidget *mainMenu;
    DisplayTrip *tripDisplay;
};

#endif // PLANCUSTOMTRIP_H
