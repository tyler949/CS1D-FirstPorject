#include "plandaytrip.h"
#include "ui_plandaytrip.h"

planDayTrip::planDayTrip(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::planDayTrip)
{
    ui->setupUi(this);
    mainMenu = parent;
    wineryList = firstVec;
}

planDayTrip::~planDayTrip()
{
    delete ui;
}

void planDayTrip::on_pushButton_clicked()
{
    this->reject();
    mainMenu->show();
}


void planDayTrip::on_planADayTrip_clicked()
{
    planCustom = new planCustomTrip(mainMenu,wineryList);
    this->close();
    planCustom->show();
}

void planDayTrip::on_tourAndPurchaseWines_clicked()
{
    tripDisplay = new DisplayTrip(mainMenu);
    this->reject();
    tripDisplay->show();
}
void planDayTrip::on_planShortestTrip_clicked()
{
    planShortest = new planShortestTrip(mainMenu,wineryList);
    this->close();
    planShortest->show();
}
void shortestDistance2(vector<WineryClass> winvec, int start, int num, vector<WineryClass> &tripvec)
{
    double smallest = 9999;
    int smallestPntr;
    int k = start;
    tripvec.push_back(winvec.at(start));
    winvec.at(start).vist();

    for(int i = 0; i < num; i++)
    {
        WineryClass temp = winvec.at(k);
        for(int count = 0; count < winvec.size() - 1; count++)
        {
            if(smallest > temp.getDistance(count)  && !(winvec.at(count).getVisted()))
            {
                smallest = temp.getDistance(count);
                smallestPntr = count;
            }
        }

        tripvec.push_back(winvec.at(smallestPntr));
        winvec.at(smallestPntr).vist();
        k = smallestPntr;
        smallest = 999999;
    }

}
void planDayTrip::on_planADayTrip_2_clicked()
{
    vector<WineryClass> newWineryVec;
    vector<int> wineriesToVisit;
    shortestDistance2(*wineryList,0, wineryList->size() - 2, newWineryVec);

    for(int i = 0; i < newWineryVec.size(); i++)
    {
        wineriesToVisit.push_back(newWineryVec.at(i).getWineryNumber()-1);
    }
    DisplayTrip *tripDisplay = new DisplayTrip(mainMenu,wineryList,0,wineryList->size(),&wineriesToVisit,&newWineryVec);
    this->reject();
    tripDisplay->show();
}
