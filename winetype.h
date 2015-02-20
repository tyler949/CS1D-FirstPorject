

#ifndef __CS1D_FirstProject_winery__wineType__
#define __CS1D_FirstProject_winery__wineType__

#include <iostream>
#include <string>
using namespace std;

class wineType
{
private:
    string wineName;
    int wineYear;
    double wineCost;

public:
    wineType* next;
    wineType(string wine1, int wineYear1, double wineCost1);
};

#endif
