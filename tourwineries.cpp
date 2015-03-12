#include "tourwineries.h"
#include "ui_tourwineries.h"

tourWineries::tourWineries(QWidget *parent,int current,vector<WineryClass> *firstVec, vector<winePurchase> *initialWinePurchase) :
    QDialog(parent),
    ui(new Ui::tourWineries)
{
    ui->setupUi(this);
    mainMenu      = parent;
    currentWinery = current;
    wineryList    = firstVec;
    winePurchases = initialWinePurchase;
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

    // If it's at last winery, then the label will change "View total purchase" otherwise keep going next
    if (currentWinery == wineryList->size()-1)
    {
        ui->visitNextWinery->setText("View Total Purchase");
    }
    else
        ui->visitNextWinery->setText("Visit Next Winery");
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
       totalWineOrder *totalWine = new totalWineOrder(this,wineryList,winePurchases);
       this->reject();
       totalWine->show();
       // (QWidget *parent,vector<wineryClass> *listOfWineries = 0, vector<winePurchase> *purchases = 0)
        currentWinery = 0;
    }
    this->updateWinery();
}

void tourWineries::on_shopForWine_clicked()
{
    shopWine = new shopForWine(this,currentWinery,wineryList,winePurchases);
    this->reject();
    shopWine->show();
}
