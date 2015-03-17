
#include "WineryClass.h"
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
WineryClass::WineryClass()
{
    name = "blank name";
    wineryNumber = 0;
    numberOfWinerys = 0;
    distanceVec.reserve(0);
    milesToVilla = 0;
    winesOffered = 0;
    winesVec.reserve(0);
    visted = false;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
WineryClass::~WineryClass()
{
}
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
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void WineryClass:: addDistance(double x)
{
    distanceVec.push_back(x);
}

void WineryClass:: addWine(wineType wine)
{
    winesVec.push_back(wine);
}
void WineryClass:: clear()
{
    distanceVec.clear();
    winesVec.clear();
}
bool WineryClass:: getVisted()
{
    return visted;
}
void WineryClass:: vist()
{
    visted = true;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int WineryClass::getSizeOfDistanceVec()
{
    return ((int)(distanceVec.size()));
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void WineryClass:: distanceClear()
{
    distanceVec.clear();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
