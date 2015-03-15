#include "newwinery.h"
#include "ui_newwinery.h"


newwinery::newwinery(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::newwinery)
{
    ui->setupUi(this);
    wineryList = firstVec;
    adminMenue = parent;
}

newwinery::~newwinery()
{
    delete ui;
}

void newwinery::on_AddWineryButton_clicked()
{
    this->reject();
    adminMenue->show();
}
