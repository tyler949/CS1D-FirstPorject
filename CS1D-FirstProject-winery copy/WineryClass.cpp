

#include "WineryClass.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//non-default constructor
WineryClass::WineryClass(string passedName, int passedWineryNumber,
                         int passedNumberOfWinerys, double passedDistance1,
                         double passedDistance2, double passedDistance3,
                         double passedDistance4, double passedDistance5,
                         double passedDistance6, double passedDistance7,
                         double passedDistance8, double passedDistance9,
                         double passedDistance10, double passedMilesToVilla,
                         int passedWinesOffered,
                         wineType*& passedWineTypesPtr)
{
    distanceVec().reserve(30);
    wines().reserve(10);
    name = passedName;
    wineryNumber = passedWineryNumber;
    numberOfWinerys = passedNumberOfWinerys;
    distanceVec().push_back(passedDistance1);
    distanceVec().push_back(passedDistance2);
    distanceVec().push_back(passedDistance3);
    distanceVec().push_back(passedDistance4);
    distanceVec().push_back(passedDistance5);
    distanceVec().push_back(passedDistance6);
    distanceVec().push_back(passedDistance7);
    distanceVec().push_back(passedDistance8);
    distanceVec().push_back(passedDistance9);
    distanceVec().push_back(passedDistance10);
    milesToVilla = passedMilesToVilla;
    winesOffered = passedWinesOffered;    
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//accessors
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


string WineryClass::getName()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int WineryClass::getWineryNumber()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int WineryClass::getNumberOfWinerys()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance1()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance2()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance3()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance4()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance5()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance6()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance7()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance8()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance9()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getDistance10()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double WineryClass::getMilesToVilla()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int WineryClass::getWinesOffered()
{
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//mutators
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//.......



