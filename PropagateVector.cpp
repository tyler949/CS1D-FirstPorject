#include <fstream>
#include "wineType.h"
#include <vector>
#include "WineryClass.h"

void PropagateVector(vector<WineryClass>& passedFirstVec)
{
    const int ARSIZE1 = 10;
    wineType temp;
    WineryClass tempWinery;
    string wineryName;
    int wineryNumber;
    int numberOfWinerys;
    double milesToVilla;
    int winesOffered;
    double tempDistance;
    string wineTypeName;
    int wineYear;
    double wineCost;
    ifstream inFile;
    
    //this is how i have to open files on mac *****************************
    inFile.open("/Users/tylerstevens/Desktop/computer science/CS1D/CS1D-FirstProject-winery/CS1D-FirstProject-winery/WineryTextFile.txt");
    //this is how to open file from pc ************************************
    //**comment out the above open code**
//    inFile.open("WineryTextFile.txt");
    
    while (inFile)
    {
        inFile.ignore(1000, ':');
        inFile.ignore(1000, ' ');
        getline(inFile, wineryName, '\n');
        tempWinery.setWineryName(wineryName);
        
        inFile.ignore(1000, ' ');
        inFile.ignore(1000, ' ');
        inFile >> wineryNumber;
        inFile.ignore(1000, '\n');
        tempWinery.setWineryNumber(wineryNumber);
        
        inFile.ignore(1000, '-');
        inFile >> numberOfWinerys;
        inFile.ignore(1000, '\n');
        tempWinery.setNumberOfWinerys(numberOfWinerys);
        
        for (int i = 0; i < ARSIZE1; i++)
        {
            inFile.ignore(1000, ' ');
            inFile >> tempDistance;
            tempWinery.addDistance(tempDistance);
            inFile.ignore(1000, '\n');
        }
        
        inFile >> milesToVilla;
        inFile.ignore(1000, '\n');
        tempWinery.setMilesToVilla(milesToVilla);
        
        inFile >> winesOffered;
        inFile.ignore(1000, '\n');
        tempWinery.setWinesOffered(winesOffered);
        
        for (int i = 0; i < winesOffered; i++)
        {
            getline(inFile, wineTypeName);
            inFile >> wineYear;
            inFile >> wineCost;
            inFile.ignore(1000, '\n');
            temp.setYear(wineYear);
            temp.setCost(wineCost);
            temp.setName(wineTypeName);
            tempWinery.addWine(temp);
        }
        
        passedFirstVec.push_back(tempWinery);
        tempWinery.clear();
    }
    inFile.close();
}