

#ifndef __CS1D_FirstProject_winery__WineryClass__
#define __CS1D_FirstProject_winery__WineryClass__

#include <iostream>
#include <string>
#include <vector>
#include "wineType.h"
using namespace std;

//x denotes which location in a vector
class WineryClass
{
private:
    string name;
    int wineryNumber;
    int numberOfWinerys;
    vector <double> distanceVec;
    double milesToVilla;
    int winesOffered;
    vector <wineType> winesVec;

public:
    //default constructor
    WineryClass();
    ~WineryClass();

    //accessors
    string  getWineryName();
    int     getWineryNumber();
    int     getNumberOfWinerys();
    double  getDistance(int x);
    double  getMilesToVilla();
    int     getWinesOffered();

    //used for getting a specific wineType nodes data
    string  getWineName(int x);
    int     getWineYear(int x);
    double  getWineCost(int x);

    //mutators
    //used for setting data about the winery
    void setWineryName(string passedName);
    void setWineryNumber(int passedNumber);
    void setNumberOfWinerys(int);
    void setDistance(int x, double passedDistance);
    void setMilesToVilla(double passedMiles);
    void setWinesOffered(int);

    //used for setting a specific wineType nodes data
    void setWineName(int x, string passedWineName);
    void setWineYear(int x, int passedWineYear);
    void setWineCost(int x, double passedWineCost);

};

#endif

////non-default constructor used with building from the file
//WineryClass(string passedName, int passedWineryNumber,
//            int passedNumberOfWinerys, vector<double>& passedDistanceVec,
//            double passedMilesToVilla, int passedWinesOffered,
//            vector<wineType>& passedWineTypeVector);
