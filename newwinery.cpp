#include "newwinery.h"
#include "ui_newwinery.h"


newwinery::newwinery(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newwinery)
{
    ui->setupUi(this);
}

newwinery::~newwinery()
{
    delete ui;
}

void newwinery::on_AddWineryButton_clicked()
{

}
