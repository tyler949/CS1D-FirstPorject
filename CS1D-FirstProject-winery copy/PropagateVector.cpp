
#include <fstream>
#include "main.h"
#include "wineType.h"

void PropagateVector(vector<WineryClass*>& passedFirstVec)
{
    wineType* wineTypesHead = NULL;
    wineType* wineTypesTail = NULL;
    wineType* wineTypesTemp = NULL;
    
    string wineryName;
    int wineryNumber;
    int numberOfWinerys;
    double distance1;
    double distance2;
    double distance3;
    double distance4;
    double distance5;
    double distance6;
    double distance7;
    double distance8;
    double distance9;
    double distance10;
    double milesToVilla;
    int winesOffered;
    string wineTypeName;
    int wineYear;
    double wineCost;
    
    ifstream inFile;
    //this is how i have to open files on mac
    inFile.open("Macintosh HD/Users/tylerstevens/Desktop/computer science"
                "/CS1D/CS1D-FirstProject-winery/CS1D-FirstProject-winery");
    //this is how to open file from pc
    //**comment out the above open code**
//    inFile.open("WineryTextFile.txt");
    
    while (inFile)
    {
        inFile.ignore(1000, ':');
        inFile.ignore(1000, ' ');
        getline(inFile, wineryName, '\n');
        
        inFile.ignore(1000, ' ');
        inFile.ignore(1000, ' ');
        inFile >> wineryNumber;
        inFile.ignore(1000, '\n');

        inFile.ignore(1000, '-');
        inFile >> numberOfWinerys;
        inFile.ignore(1000, '\n');
        
        inFile.ignore(1000, ' ');
        inFile >> distance1;
        inFile.ignore(1000, '\n');
        
        inFile.ignore(1000, ' ');
        inFile >> distance2;
        inFile.ignore(1000, '\n');
        
        inFile.ignore(1000, ' ');
        inFile >> distance3;
        inFile.ignore(1000, '\n');
        
        inFile.ignore(1000, ' ');
        inFile >> distance4;
        inFile.ignore(1000, '\n');
        
        inFile.ignore(1000, ' ');
        inFile >> distance5;
        inFile.ignore(1000, '\n');
        
        inFile.ignore(1000, ' ');
        inFile >> distance6;
        inFile.ignore(1000, '\n');
        
        inFile.ignore(1000, ' ');
        inFile >> distance7;
        inFile.ignore(1000, '\n');
        
        inFile.ignore(1000, ' ');
        inFile >> distance8;
        inFile.ignore(1000, '\n');
        
        inFile.ignore(1000, ' ');
        inFile >> distance9;
        inFile.ignore(1000, '\n');
        
        inFile.ignore(1000, ' ');
        inFile >> distance10;
        inFile.ignore(1000, '\n');
        
        inFile >> milesToVilla;
        inFile.ignore(1000, '\n');
        inFile >> winesOffered;
        inFile.ignore(1000, '\n');
        
        
        
        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        //makes a list of the wines offered and passes the list to the
        //constructor
        
        for (int j = 1; j <= winesOffered; j++)
        {
            getline(inFile, wineTypeName);
            inFile >> wineYear;
            inFile.ignore(1000, '\n');
            inFile >> wineCost;
            inFile.ignore(1000, '\n');
            
            if (wineTypesHead == NULL)
            {
                wineTypesHead = new wineType(wineTypeName, wineYear,
                                            wineCost);
                wineTypesTail = wineTypesHead;
                wineTypesHead->next = NULL;
            }
            else
            {
                wineTypesTemp = new wineType(wineTypeName, wineYear,
                                             wineCost);
                wineTypesTemp->next = wineTypesTail->next;
                wineTypesTail->next = wineTypesTemp;
                wineTypesTail = wineTypesTail->next;
            }
        }
        
        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

        
        passedFirstVec.push_back(new WineryClass(wineryName, wineryNumber,
                                                 numberOfWinerys, distance1,
                                                 distance2, distance3, distance4,
                                                 distance5, distance6, distance7,
                                                 distance8, distance9, distance10,
                                                 milesToVilla, winesOffered,
                                                 wineTypesHead));
    }
    
    inFile.close();
}

