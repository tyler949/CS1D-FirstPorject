#include "planshortesttrip.h"
#include "ui_planshortesttrip.h"
#include "displaytrip.h"
planShortestTrip::planShortestTrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planShortestTrip)
{
    ui->setupUi(this);
    mainMenu = parent;
}

planShortestTrip::~planShortestTrip()
{
    delete ui;
}


void planShortestTrip::on_pushButton_clicked()
{
    tripDisplay = new DisplayTrip(mainMenu);
    this->close();
    tripDisplay->show();
}
