#include "planshortesttrip.h"
#include "ui_planshortesttrip.h"

planShortestTrip::planShortestTrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planShortestTrip)
{
    ui->setupUi(this);
}

planShortestTrip::~planShortestTrip()
{
    delete ui;
}

