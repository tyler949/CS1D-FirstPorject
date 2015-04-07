#include "plancustomtrip.h"
#include "ui_plancustomtrip.h"
#include <QCheckBox>
#include <QStandardItemModel>
#include <QModelIndex>
#include <QListWidgetItem>
#include "mainwindow.h"
#include <QDebug>
#include "plandaytrip.h"

planCustomTrip::planCustomTrip(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::planCustomTrip)
{
    ui->setupUi(this);
    mainMenu = parent;
    // Assign winery list vector
    wineryList = firstVec;

    // Go through each winery and put them in a list with a checkbox next to it
    for(int i = 0; i<wineryList->size()-1;i++)
    {
        // Get item from winery list vector
        QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(wineryList->at(i).getWineryName()), ui->listWidget);
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable); // set checkable flag
        item->setCheckState(Qt::Unchecked); // AND initialize check state
    }
}

planCustomTrip::~planCustomTrip()
{
    delete ui;
}
// This function will update the vector. It will allow you to pass original list
// and an empty list. It will then re-arrange the order of the list into the new vector
// and set the distances between one-another
void updateVector(vector<WineryClass> orginal, vector<WineryClass> &newVec)
{

    // Initialize key for winery number
    int key;
    // Clear distance of each winery
    for(int i = 0; i < newVec.size(); i++)
    {
        newVec.at(i).distanceClear();
    }
    // Get winery number for each and then add the distance relative to the other wineries
    // on thie list
    for(int i = 0; i < newVec.size(); i++)
    {
        key = newVec.at(i).getWineryNumber() -1;
        for(int j = 0; j < newVec.size(); j++)
        {

            newVec.at(j).addDistance(orginal.at(newVec.at(j).getWineryNumber() - 1).getDistance(key));
        }
    }
    // Set the winery number for each winery
    for(int i = 0; i < newVec.size(); i ++)
    {
        newVec.at(i).setWineryNumber((i + 1));
    }
}
void planCustomTrip::on_pushButton_clicked()
{
    // Vector for list of wineries to visit
    vector<WineryClass> wineriesToVisit;
    vector<int> wineriesPass;

    // Reset errors
    ui->noWineriesSelected->setText("");
    ui->noWineriesSelected->setStyleSheet("");

    for(int row = 0; row < ui->listWidget->count(); row++)
    {
        // Check if item is checked. If so, add to vector
        // of wineries to visit
        if (ui->listWidget->item(row)->checkState() == Qt::Checked)
        {
            wineriesToVisit.push_back(wineryList->at(row));
        }

    }
    // Now we are error checking...

    // If no winery to visit is checked, then it will not allow to proceed
    if (wineriesToVisit.empty())
    {
        ui->noWineriesSelected->setText("Please select at least one winery to visit");
        ui->noWineriesSelected->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
    }
    else
    {
        // Update vector to get the new order
        updateVector(*wineryList,wineriesToVisit);

        // Show display trip and close this dialog
        tripDisplay = new DisplayTrip(mainMenu,wineryList,0,0,0,&wineriesToVisit);
        this->reject();
        tripDisplay->show();


    }
}

void planCustomTrip::on_back_clicked()
{
    // If back clicked, go back to plan day trip
    this->reject();
    planDayTrip *dayTrip = new planDayTrip(mainMenu,wineryList);
    dayTrip->show();

}
