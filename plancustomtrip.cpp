#include "plancustomtrip.h"
#include "ui_plancustomtrip.h"

planCustomTrip::planCustomTrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planCustomTrip)
{
    ui->setupUi(this);
    mainMenu = parent;
}

planCustomTrip::~planCustomTrip()
{
    delete ui;
}

void planCustomTrip::on_pushButton_clicked()
{
    tripDisplay = new DisplayTrip(mainMenu);
    this->hide();
    tripDisplay->show();
}
