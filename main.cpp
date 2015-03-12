

#include "main.h"

int main()
{
    vector<WineryClass> firstVec;
    PropagateVector(firstVec);
    
    srand((double)time(NULL));

    cout << fixed << setprecision(1);
    
    //-------showing that the names of wineries, the distances, and the
    //wines are in the vector-----------------------------------------
    for (int i = 0; i < firstVec.size() - 1; i++)
    {
        cout << endl << "test " << i << endl;
        cout << firstVec.at(i).getWineryName() << endl;
        
        for (int j = 0; j < firstVec.at(i).getNumberOfWinerys(); j++)
        {
            cout << firstVec.at(i).getDistance(j) << endl;
          
        }
        
        cout << firstVec.at(i).getWineName(0) << endl;
        cout << firstVec.at(i).getWineYear(0) << endl;
        cout << firstVec.at(i).getWineCost(0) << endl;
        
        cout << endl;
    }
    
    //-------using the shortest distance function-----------------------
    int tempPlaceTosStart = 2;
    int tempWineriesToVisit = 4;
    
    vector<WineryClass> tripVec;
    shortestDistance(firstVec, tempPlaceTosStart, tempWineriesToVisit,
                     tripVec);
    
    for (int i = 0; i < tempWineriesToVisit +1; i++)
    {
        cout << tripVec.at(i).getWineryName() << endl;
    }
    
    cout << endl;
    
    //----------this portion demonstrates the methods in UserClass--------
    string username = "tyler";
    string password = "stevens";
    bool adminOrNot = false;
    
    UserClass firstUser(username, password);
    adminOrNot = firstUser.checkValid(username, password);
    
    if (adminOrNot)
    {
        cout << "admin is logged in" << endl << endl;
    }
    
    wineType tempWine;
    vector<wineType> wineVect;
    
    tempWine.setName("the bubbly");
    tempWine.setYear(1984);
    tempWine.setCost(0.50);
    
    wineVect.push_back(tempWine);
    
    firstUser.adminAddWinery(firstVec, "tylers winery", 11, 11, 6.2, 1, wineVect);
    
    //11 is the newest winery that was just added
    cout << firstVec.at(11).getWineryName() << endl;
    cout << firstVec.at(11).getWineName(0) << endl << endl;
    
    tempWine.setName("addedWine");
    tempWine.setYear(2222);
    tempWine.setCost(1.50);
    firstUser.adminAddWine(firstVec, 11, tempWine);
    
    cout << firstVec.at(11).getWineName(1) << endl << endl;

    
    //-------------------------------------------------------------------

    
    return 0;
}
