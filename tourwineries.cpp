#include "tourwineries.h"
#include "ui_tourwineries.h"

tourWineries::tourWineries(QWidget *parent,int current,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::tourWineries)
{
    ui->setupUi(this);
    mainMenu      = parent;
    currentWinery = current;
    wineryList    = firstVec;

    this->updateWinery();
}
tourWineries::~tourWineries()
{
    delete ui;
}
void tourWineries::updateWinery()
{
    // This class will be run whenever the winery has changed

    // Update Winery Title
    ui->label->setText(QString("Winery %1: "+ QString::fromStdString(wineryList->at(currentWinery).getWineryName())).arg(currentWinery+1));
}

void tourWineries::on_pushButton_clicked()
{
    this->reject();
    mainMenu->show();
}

void tourWineries::on_visitNextWinery_clicked()
{
    if (currentWinery < wineryList->size()-1)
    {
        currentWinery++;
    }
    else
    {
        currentWinery = 0;
    }
    this->updateWinery();
}

void tourWineries::on_shopForWine_clicked()
{
    shopWine = new shopForWine(this,currentWinery,wineryList);
    this->hide();
    shopWine->show();
}
