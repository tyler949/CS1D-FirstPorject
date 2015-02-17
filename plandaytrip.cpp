#include "plandaytrip.h"
#include "ui_plandaytrip.h"
#include "planshortesttrip.h"
#include "plancustomtrip.h"
#include "displaytrip.h"

planDayTrip::planDayTrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planDayTrip)
{
    ui->setupUi(this);
    mainMenu = parent;
}

planDayTrip::~planDayTrip()
{
    delete ui;
}

void planDayTrip::on_pushButton_clicked()
{
    this->close();
    mainMenu->show();
}

void planDayTrip::on_planShortestTrip_clicked()
{
    planShortest = new planShortestTrip(mainMenu);
    this->close();
    planShortest->show();
}


void planDayTrip::on_planADayTrip_clicked()
{
    planCustom = new planCustomTrip(mainMenu);
    this->close();
    planCustom->show();
}

void planDayTrip::on_tourAndPurchaseWines_clicked()
{
    tripDisplay = new DisplayTrip(mainMenu);
    this->hide();
    tripDisplay->show();
}
