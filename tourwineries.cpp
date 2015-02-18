#include "tourwineries.h"
#include "ui_tourwineries.h"

tourWineries::tourWineries(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tourWineries)
{
    ui->setupUi(this);
    mainMenu = parent;
}
tourWineries::~tourWineries()
{
    delete ui;
}

void tourWineries::on_pushButton_clicked()
{
    this->reject();
    mainMenu->show();
}

void tourWineries::on_planShortestTrip_clicked()
{

}
