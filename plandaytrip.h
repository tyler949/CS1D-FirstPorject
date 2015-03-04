#ifndef PLANDAYTRIP_H
#define PLANDAYTRIP_H

#include <QDialog>
#include "planshortesttrip.h"
#include <vector>
#include "wineryclass.h"
#include "displaytrip.h"
#include "plancustomtrip.h"

namespace Ui {
class planDayTrip;
}

class planDayTrip : public QDialog
{
    Q_OBJECT

public:
    explicit planDayTrip(QWidget *parent = 0,vector<WineryClass> *firstVec = 0);
    ~planDayTrip();

private slots:
    void on_planShortestTrip_clicked();
    void on_pushButton_clicked();
    void on_planADayTrip_clicked();
    void on_tourAndPurchaseWines_clicked();

private:
    Ui::planDayTrip *ui;
    planShortestTrip *planShortest;
    DisplayTrip *tripDisplay;
    planCustomTrip *planCustom;
    vector<WineryClass> *wineryList;
    QWidget *mainMenu;
};

#endif // PLANDAYTRIP_H
