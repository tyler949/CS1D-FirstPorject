#include "plandaytrip.h"
#include "ui_plandaytrip.h"
#include "planshortesttrip.h"

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
    planShortest = new planShortestTrip;
    this->close();
    planShortest->show();
}
