
#include <fstream>
#include "main.h"
#include "wineType.h"

void PropagateVector(vector<WineryClass*>& passedFirstVec)
{
    const int ARSIZE1 = 10;
    const int ARSIZE2 = 10;
    vector<double> tempDistanceVector(ARSIZE1);
    vector<wineType> tempWineTypeVector(ARSIZE2);
    

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
        
        for (int i = 0; i < ARSIZE1; i++)
        {
            inFile.ignore(1000, ' ');
            inFile >> tempDistance;
            tempDistanceVector.at(i) = tempDistance;
            inFile.ignore(1000, '\n');
        }
        
        inFile >> milesToVilla;
        inFile.ignore(1000, '\n');
        inFile >> winesOffered;
        inFile.ignore(1000, '\n');
        
        
        for (int i = 0; i < winesOffered; i++)
        {
            getline(inFile, wineTypeName);
            inFile >> wineYear;
            inFile.ignore(1000, '\n');
            inFile >> wineCost;
            inFile.ignore(1000, '\n');
            
            tempWineTypeVector.at(i).setName(wineTypeName);
            tempWineTypeVector.at(i).setYear(wineYear);
            tempWineTypeVector.at(i).setCost(wineCost);

        }

        passedFirstVec.push_back(new WineryClass(wineryName, wineryNumber,
                                                 numberOfWinerys,
                                                 tempDistanceVector,
                                                 milesToVilla, winesOffered,
                                                 tempWineTypeVector));
    }
    
    inFile.close();
}



//makes a list of the wines offered and passes the list to the
//constructor

//        for (int j = 1; j <= winesOffered; j++)
//        {
//            getline(inFile, wineTypeName);
//            inFile >> wineYear;
//            inFile.ignore(1000, '\n');
//            inFile >> wineCost;
//            inFile.ignore(1000, '\n');
//
//            if (wineTypesHead == NULL)
//            {
//                wineTypesHead = new wineType(wineTypeName, wineYear,
//                                            wineCost);
//                wineTypesTail = wineTypesHead;
//                wineTypesHead->next = NULL;
//            }
//            else
//            {
//                wineTypesTemp = new wineType(wineTypeName, wineYear,
//                                             wineCost);
//                wineTypesTemp->next = wineTypesTail->next;
//                wineTypesTail->next = wineTypesTemp;
//                wineTypesTail = wineTypesTail->next;
//            }
//        }