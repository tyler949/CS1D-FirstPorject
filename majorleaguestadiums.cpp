#include "majorleaguestadiums.h"
#include "ui_majorleaguestadiums.h"
#include "displaytrip.h"

majorleaguestadiums::majorleaguestadiums(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::majorleaguestadiums)
{
    ui->setupUi(this);
}

majorleaguestadiums::~majorleaguestadiums()
{
    delete ui;
}

void majorleaguestadiums::on_pushButton_clicked()
{
    displaytrip *display = new displaytrip;
    this->reject();
    display->show();
}
