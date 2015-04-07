#include "dreamvacation.h"
#include "ui_dreamvacation.h"
#include "displaytrip.h"
dreamvacation::dreamvacation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dreamvacation)
{
    ui->setupUi(this);
}

dreamvacation::~dreamvacation()
{
    delete ui;
}

void dreamvacation::on_pushButton_clicked()
{
    displaytrip *display = new displaytrip;
    this->reject();
    display->show();
}
