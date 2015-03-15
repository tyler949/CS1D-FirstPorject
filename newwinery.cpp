#include "newwinery.h"
#include "ui_newwinery.h"


newwinery::newwinery(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::newwinery)
{
    ui->setupUi(this);
    wineryList = firstVec;
}

newwinery::~newwinery()
{
    delete ui;
}

void newwinery::on_AddWineryButton_clicked()
{

}
