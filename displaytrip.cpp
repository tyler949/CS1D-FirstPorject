#include "displaytrip.h"
#include "ui_displaytrip.h"
#include "shopforwine.h"
#include <QDebug>
DisplayTrip::DisplayTrip(QWidget *parent,vector<WineryClass> *firstVec,
                         int itemChosen,
                         int totalWineries,
                         vector<int> *listOfWineries,
                         vector<WineryClass> *theNewWineryList) :
    QDialog(parent),
    ui(new Ui::DisplayTrip)
{
    ui->setupUi(this);
    mainMenu     = parent;
    wineryList   = firstVec;
    itemIndex    = itemChosen;
    totalToVisit = totalWineries;
    wineriesToVisit = listOfWineries;
    totalMiles   = &totalToVisit;
    newWineryList = theNewWineryList;

    int prevWinery = 0;
    double miles = 0;
    if (listOfWineries != 0)
    {
        // List each winery
        for(vector<int>::iterator it = listOfWineries->begin(); it< listOfWineries->end(); it++)
        {
            if (prevWinery > 0)
            {
                miles += wineryList->at(*it).getDistance(prevWinery);

                qDebug() << "FROM WINERY: " << QString::fromStdString(wineryList->at(*it).getWineryName())
                         << "TO WINERY: " << QString::fromStdString(wineryList->at(prevWinery).getWineryName())
                         << "IS " << wineryList->at(*it).getDistance(prevWinery);
            }
            QListWidgetItem *Item;
            Item = new QListWidgetItem();
            Item->setText(QString::fromStdString(wineryList->at(*it).getWineryName()));
            ui->listWidget->addItem(Item);
            prevWinery = *it;
        }
        // Set total miles
        ui->label->setStyleSheet("padding: 5px;");
        ui->label->setText(QString::number(miles)+QString(" miles"));
    }
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

void DisplayTrip::on_shopForWine_clicked()
{
    vector<winePurchase> *purchases;
    shopForWine *wineShopping =  new shopForWine(mainMenu,0,newWineryList,purchases);
    wineShopping->show();
    this->reject();
}
