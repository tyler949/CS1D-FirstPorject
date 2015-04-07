#include "planshortesttrip.h"
#include "ui_planshortesttrip.h"
#include "displaytrip.h"
#include <vector>
#include "wineryclass.h"
#include <QListWidget>
#include <QDebug>
#include "mainwindow.h"
#include "plandaytrip.h"

planShortestTrip::planShortestTrip(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::planShortestTrip)
{
    ui->setupUi(this);
    mainMenu = parent;

    // Winery list assign
    wineryList = firstVec;
    // Show each winery with a checkbox next to it
    for(int i=0;i< wineryList->size()-1;i++)
    {
        ui->comboBox->addItem(QString::fromStdString(wineryList->at(i).getWineryName()));
    }
}

planShortestTrip::~planShortestTrip()
{
    delete ui;
}
// This is the shortest distance formula. You pass in the original winery list, the start
// number (winery number) and the number of wines and you provide an empty winery class vector
// that you it can propogate into
void shortestDistance(vector<WineryClass> winvec, int start, int num, vector<WineryClass> &tripvec)
{
    // Set smallest to 9999
    double smallest = 9999;
    int smallestPntr;
    // Start at the winery chosen
    int k = start;
    tripvec.push_back(winvec.at(start));
    winvec.at(start).vist();

    for(int i = 0; i < num; i++)
    {
        WineryClass temp = winvec.at(k);
        // Go through each and get distances and if they are closest then add to list
        // and mark as visited
        for(int count = 0; count < winvec.size() - 1; count++)
        {
            if(smallest > temp.getDistance(count)  && !(winvec.at(count).getVisted()))
            {
                // Get distance of current one
                smallest = temp.getDistance(count);
                smallestPntr = count;
            }
        }
        // Add to winery list
        tripvec.push_back(winvec.at(smallestPntr));
        // Mark as visited
        winvec.at(smallestPntr).vist();
        k = smallestPntr;
        smallest = 999999;
    }

}
void planShortestTrip::on_pushButton_clicked()
{
    // Wineries to visit
    vector<int> wineriesToVisit;

    // Reset any error labels, the error may not be needed this time
    ui->missingStartWinery->setText("");
    ui->missingStartWinery->setStyleSheet("");
    ui->missingTotalWineries->setText("");
    ui->missingTotalWineries->setStyleSheet("");

    // Get field of items chosen and total wineries
    int itemChosen    = ui->comboBox->currentIndex()-1;
    int totalWineries = ui->spinBox->value();

    // Error check if there were no items chosen or no amount of wines selected
    if (itemChosen == -1 || totalWineries == 0)
    {
        if (itemChosen == -1)
        {
            ui->missingStartWinery->setText("Must select winery to continue");
            ui->missingStartWinery->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
        }
        if (totalWineries == 0)
        {
            ui->missingTotalWineries->setText("Total wineries to visit must be greater than 0");
            ui->missingTotalWineries->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
        }
    }
    else
    {
        vector<WineryClass> newWineryVec;
        shortestDistance(*wineryList,itemChosen+1, totalWineries, newWineryVec);

        for(int i = 0; i < newWineryVec.size()-1; i++)
        {
            wineriesToVisit.push_back(newWineryVec.at(i).getWineryNumber()-1);
        }
        tripDisplay = new DisplayTrip(mainMenu,wineryList,itemChosen,totalWineries,&wineriesToVisit,&newWineryVec);
        this->reject();
        tripDisplay->show();
    }
}
void planShortestTrip::on_back_clicked()
{
    this->reject();
    planDayTrip *dayTrip = new planDayTrip(mainMenu,wineryList);
    dayTrip->show();

}
