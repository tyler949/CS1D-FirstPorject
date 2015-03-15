#ifndef WRITETOFILE_CPP
#define WRITETOFILE_CPP

#include <fstream>
#include <vector>
#include <iostream>
#include <iomanip>
#include "wineType.h"
#include "WineryClass.h"

void WriteToFile(vector<WineryClass>& wineryVector)
{
    cout << "\nEntering WriteToFile function.";
    ofstream outFile;
    outFile.open("WineryTextFile.txt");
    outFile << fixed << setprecision(1);
    for (int i = 0; i < wineryVector.size() - 1; i++)
    {
        outFile << "name of winery: " << wineryVector[i].getWineryName() << endl;
        outFile << "winery number " << wineryVector[i].getWineryNumber() << endl;
        outFile << "distance to other wineries - " << wineryVector[i].getNumberOfWinerys() << endl;
        for (int j = 0; j < wineryVector[i].getNumberOfWinerys(); j++)
        {
            outFile << j + 1 << " " << wineryVector[i].getDistance(j) << endl;
        }
        outFile << fixed << setprecision(2);
        outFile << wineryVector[i].getMilesToVilla() << " miles to Canyon Villa\n";
        outFile << fixed << setprecision(0);
        outFile << wineryVector[i].getWinesOffered() << " wines offered\n";
        for (int j = 0; j < wineryVector[i].getWinesOffered(); j++)
        {
            outFile << wineryVector[i].getWineName(j) << endl;
            outFile << wineryVector[i].getWineYear(j) << endl;
            outFile << setprecision(2);
            outFile << wineryVector[i].getWineCost(j) << endl;
        }
        outFile << endl;
    }
    outFile.close();
}
