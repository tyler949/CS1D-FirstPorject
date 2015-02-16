#ifndef PLANDAYTRIP_H
#define PLANDAYTRIP_H

#include <QDialog>
#include "planshortesttrip.h"

namespace Ui {
class planDayTrip;
}

class planDayTrip : public QDialog
{
    Q_OBJECT

public:
    explicit planDayTrip(QWidget *parent = 0);
    ~planDayTrip();

private slots:



    void on_pushButton_clicked();

    void on_planShortestTrip_clicked();

private:
    Ui::planDayTrip *ui;
    QWidget *mainMenu;
    planShortestTrip *planShortest;
};

#endif // PLANDAYTRIP_H
