#include "displaytrip.h"
#include "ui_displaytrip.h"
#include <QDebug>
DisplayTrip::DisplayTrip(QWidget *parent,vector<WineryClass> *firstVec,
                         int itemChosen,
                         int totalWineries,
                         vector<int> *listOfWineries) :
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

    if (listOfWineries != 0)
    {
        // List each winery
        for(vector<int>::iterator it = listOfWineries->begin(); it< listOfWineries->end(); it++)
        {
            QListWidgetItem *Item;
            Item = new QListWidgetItem();
            Item->setText(QString::fromStdString(wineryList->at(*it).getWineryName()));
            ui->listWidget->addItem(Item);
        }
        // Set total miles
        ui->label->setStyleSheet("padding: 5px;");
        ui->label->setText(QString::number(*totalMiles));
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
