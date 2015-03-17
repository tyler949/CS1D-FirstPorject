#include "WineryClass.h"
#include "main.h"

void updateVector(vector<WineryClass> orginal, vector<WineryClass> &newVec)
{
    int key;
    for(int i = 0; i < newVec.size(); i++)
    {
        newVec.at(i).distanceClear();
    }
    
    for(int i = 0; i < newVec.size(); i++)
    {
        key = newVec.at(i).getWineryNumber() -1;
        for(int j = 0; j < newVec.size(); j++)
        {
            
            newVec.at(j).addDistance(orginal.at(newVec.at(j).getWineryNumber() - 1).getDistance(key));
        }
    }
    
    for(int i = 0; i < newVec.size(); i ++)
    {
        newVec.at(i).setWineryNumber((i + 1));
    }
}