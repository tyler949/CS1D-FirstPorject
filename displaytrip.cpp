#include "displaytrip.h"
#include "ui_displaytrip.h"

DisplayTrip::DisplayTrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayTrip)
{
    ui->setupUi(this);
    mainMenu = parent;
}

DisplayTrip::~DisplayTrip()
{
    delete ui;
}

void DisplayTrip::on_pushButton_clicked()
{
    this->reject();
    mainMenu->show();
}
