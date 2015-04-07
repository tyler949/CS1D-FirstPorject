#include "plandaytrip.h"
#include "ui_plandaytrip.h"

planDayTrip::planDayTrip(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::planDayTrip)
{
    ui->setupUi(this);
    mainMenu = parent;
    //Assign winery list
    wineryList = firstVec;
}

planDayTrip::~planDayTrip()
{
    delete ui;
}

void planDayTrip::on_pushButton_clicked()
{
    // Back to main menu
    this->reject();
    mainMenu->show();
}


void planDayTrip::on_planADayTrip_clicked()
{
    // Go to custom trip dialog and close this
    planCustom = new planCustomTrip(mainMenu,wineryList);
    this->close();
    planCustom->show();
}

void planDayTrip::on_tourAndPurchaseWines_clicked()
{
    // Go to tour and purchase wines dialog and close this
    tripDisplay = new DisplayTrip(mainMenu);
    this->reject();
    tripDisplay->show();
}
void planDayTrip::on_planShortestTrip_clicked()
{
    // Go to shortest trip dialog and close this
    planShortest = new planShortestTrip(mainMenu,wineryList);
    this->close();
    planShortest->show();
}
// This is the shortest distance formula. You pass in the original winery list, the start
// number (winery number) and the number of wines and you provide an empty winery class vector
// that you it can propogate into
void shortestDistance2(vector<WineryClass> winvec, int start, int num, vector<WineryClass> &tripvec)
{
    // Set smallest to 9999
    double smallest = 9999;
    int smallestPntr;
    int k = start;
    // Start at the winery chosen
    tripvec.push_back(winvec.at(start));
    // Mark as visited
    winvec.at(start).vist();

    // Go through the number of wineries and get the closest ones
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
        // Add to the winery list
        tripvec.push_back(winvec.at(smallestPntr));
        //Mark as visited
        winvec.at(smallestPntr).vist();
        k = smallestPntr;
        smallest = 999999;
    }

}
void planDayTrip::on_planADayTrip_2_clicked()
{
    // Plan a day trip clicked
    vector<WineryClass> newWineryVec;
    vector<int> wineriesToVisit;
    // Go through the shortest distances formula. Getting the closest wineries
    // depending on amount of wineries you want to visit. It will also start at the
    // chosen starting winery.
    shortestDistance2(*wineryList,0, wineryList->size() - 2, newWineryVec);

    // Add each winery to list
    for(int i = 0; i < newWineryVec.size(); i++)
    {
        wineriesToVisit.push_back(newWineryVec.at(i).getWineryNumber()-1);
    }
    // Show winery in the display
    DisplayTrip *tripDisplay = new DisplayTrip(mainMenu,wineryList,0,wineryList->size(),&wineriesToVisit,&newWineryVec);
    this->reject();
    tripDisplay->show();
}
