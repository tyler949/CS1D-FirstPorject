
#ifndef WINERYCLASS_H_
#define WINERYCLASS_H_

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
bool visted;

public:
//default constructor
WineryClass();
~WineryClass();
//accessors
string getWineryName();
int getWineryNumber();
int getNumberOfWinerys();
double getDistance(int x);
double getMilesToVilla();
int getWinesOffered();
bool getVisted();
void vist();
//used for getting a specific wineType nodes data
string getWineName(int x);
int getWineYear(int x);
double getWineCost(int x);
//mutators
//used for setting data about the winery
void setWineryName(string passedName);
void setWineryNumber(int passedNumber);
void setNumberOfWinerys(int);
void setDistance(int x, double passedDistance);
void addDistance(double x);
void addWine(wineType wine);
void clear();
void setMilesToVilla(double passedMiles);
void setWinesOffered(int);
//used for setting a specific wineType nodes data
void setWineName(int x, string passedWineName);
void setWineYear(int x, int passedWineYear);
void setWineCost(int x, double passedWineCost);
};



#endif /* WINERYCLASS_H_ */
