#ifndef __CS1D_FirstProject_winery__WineryClass__
#define __CS1D_FirstProject_winery__WineryClass__

#include <iostream>
#include <string>
#include "wineType.h"
using namespace std;

class WineryClass
{
private:
    string name;
    int wineryNumber;
    int numberOfWinerys;
    double distance1, distance2, distance3, distance4,
    distance5, distance6, distance7, distance8,
    distance9, distance10;
    double milesToVilla;
    int winesOffered;


public:
    wineType* wineTypesPtr;

    //non-default constructor used with building from the file
    WineryClass(string passedName, int passedWineryNumber,
                int passedNumberOfWinerys, double passedDistance1,
                double passedDistance2, double passedDistance3,
                double passedDistance4, double passedDistance5,
                double passedDistance6, double passedDistance7,
                double passedDistance8, double passedDistance9,
                double passedDistance10, double passedMilesToVilla,
                int passedWinesOffered, wineType*& passedWineTypesPtr);

};

#endif
