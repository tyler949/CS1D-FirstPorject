#include "plandaytrip.h"
#include "ui_plandaytrip.h"

planDayTrip::planDayTrip(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::planDayTrip)
{
    ui->setupUi(this);
    mainMenu = parent;
    wineryList = firstVec;
}

planDayTrip::~planDayTrip()
{
    delete ui;
}

void planDayTrip::on_pushButton_clicked()
{
    this->reject();
    mainMenu->show();
}


void planDayTrip::on_planADayTrip_clicked()
{
    planCustom = new planCustomTrip(mainMenu,wineryList);
    this->close();
    planCustom->show();
}

void planDayTrip::on_tourAndPurchaseWines_clicked()
{
    tripDisplay = new DisplayTrip(mainMenu);
    this->reject();
    tripDisplay->show();
}
void planDayTrip::on_planShortestTrip_clicked()
{
    planShortest = new planShortestTrip(mainMenu,wineryList);
    this->close();
    planShortest->show();
}
