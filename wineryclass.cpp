#include "WineryClass.h"

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
    name = passedName;
    wineryNumber = passedWineryNumber;
    numberOfWinerys = passedNumberOfWinerys;
    distance1  = passedDistance1;
    distance2  = passedDistance2;
    distance3  = passedDistance3;
    distance4  = passedDistance4;
    distance5  = passedDistance5;
    distance6  = passedDistance6;
    distance7  = passedDistance7;
    distance8  = passedDistance8;
    distance9  = passedDistance9;
    distance10 = passedDistance10;
    milesToVilla = passedMilesToVilla;
    winesOffered = passedWinesOffered;
    wineTypesPtr = passedWineTypesPtr;

}
