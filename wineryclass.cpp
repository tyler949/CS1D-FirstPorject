

#include "WineryClass.h"
#include <QDebug>
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

WineryClass::WineryClass()
{
    name = "blank name";
    wineryNumber = 0;
    numberOfWinerys = 0;
    distanceVec.reserve(30);
    milesToVilla = 0;
    winesOffered = 0;
    winesVec.reserve(10);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

WineryClass::~WineryClass()
{

}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

////non-default constructor
//WineryClass::WineryClass(string passedName, int passedWineryNumber,
//                         int passedNumberOfWinerys,
//                         vector<double>& passedDistanceVec,
//                         double passedMilesToVilla, int passedWinesOffered,
//                         vector<wineType>& passedWineTypeVector)
//{
//    distanceVec().reserve(30);
//    winesVec().reserve(10);
//
//    name = passedName;
//    wineryNumber = passedWineryNumber;
//    numberOfWinerys = passedNumberOfWinerys;
//
//    for (int i = 0; i < sizeof(passedDistanceVec); i++)
//    {
//        distanceVec().push_back(passedDistanceVec.at(i));
//
//    }
//
//    milesToVilla = passedMilesToVilla;
//    winesOffered = passedWinesOffered;
//
//    for (int i = 0; i < sizeof(passedWineTypeVector); i++)
//    {
//        winesVec().at(i) = passedWineTypeVector.at(i);
//    }
//
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//accessors
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


string WineryClass::getWineryName()
{
    return name;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int WineryClass::getWineryNumber()
{
    return wineryNumber;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int WineryClass::getNumberOfWinerys()
{
    return numberOfWinerys;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance(int x)
{
    return distanceVec.at(x);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getMilesToVilla()
{
    return milesToVilla;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int WineryClass::getWinesOffered()
{
    return winesOffered;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

string WineryClass::getWineName(int x)
{
    return winesVec.at(x).getName();
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int WineryClass::getWineYear(int x)
{
    return winesVec.at(x).getYear();
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getWineCost(int x)
{
    return winesVec.at(x).getCost();
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//mutators~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void WineryClass::setWineryName(string passedName)
{
    name = passedName;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void WineryClass::setWineryNumber(int passedNumber)
{
    wineryNumber = passedNumber;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void WineryClass::setNumberOfWinerys(int passedNumber)
{
    numberOfWinerys = passedNumber;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void WineryClass::setDistance(int x, double passedDistance)
{
    distanceVec.at(x) = passedDistance;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void WineryClass::setMilesToVilla(double passedMiles)
{
    milesToVilla = passedMiles;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void WineryClass::setWinesOffered(int passedWinesOffered)
{
    winesOffered = passedWinesOffered;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//used for setting a specific wineType node within the wineries
void WineryClass::setWineName(int x, string passedName)
{
    winesVec.at(x).setName(passedName);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void WineryClass::setWineYear(int x, int passedWineYear)
{
    winesVec.at(x).setYear(passedWineYear);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void WineryClass::setWineCost(int x, double passedWineCost)
{
    winesVec.at(x).setCost(passedWineCost);
}

vector<wineType>* WineryClass::getWines()
{
    qDebug() << " TEEEEEEEESSSSSSST ******: " << QString::number(winesVec.size());
    return &winesVec;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

