

#include "main.h"

int main()
{
    vector<WineryClass> firstVec;
    PropagateVector(firstVec);
    
//    srand((double)time(NULL));

//    cout << fixed << setprecision(1);
//    
//    //-------showing that the names of wineries, the distances, and the
//    //wines are in the vector-----------------------------------------
//    for (int i = 0; i < firstVec.size() - 1; i++)
//    {
//        cout << endl << "test " << i << endl;
//        cout << firstVec.at(i).getWineryName() << endl;
//        
//        for (int j = 0; j < firstVec.at(i).getNumberOfWinerys(); j++)
//        {
//            cout << firstVec.at(i).getDistance(j) << endl;
//          
//        }
//        
//        cout << firstVec.at(i).getWineName(0) << endl;
//        cout << firstVec.at(i).getWineYear(0) << endl;
//        cout << firstVec.at(i).getWineCost(0) << endl;
//        
//        cout << endl;
//    }
//    
//    cout << firstVec.at(10).getWineryName() << endl << endl;
//    
//    //-------using the shortest distance function-----------------------
//    int tempPlaceTosStart = 0;
//    int tempWineriesToVisit = 1;
//    
//    vector<WineryClass> tripVec;
//    shortestDistance(firstVec, tempPlaceTosStart, tempWineriesToVisit,
//                     tripVec);
//    
//    for (int i = 0; i < tempWineriesToVisit; i++)
//    {
//        cout << tripVec.at(i).getWineryName() << endl;
//    }
//    
//    cout << endl;
//    
//    //----------this portion demonstrates the methods in UserClass--------
//    string username = "tyler";
//    string password = "stevens";
//    bool adminOrNot = false;
//    
//    UserClass firstUser(username, password);
//    adminOrNot = firstUser.checkValid(username, password);
//    
//    if (adminOrNot)
//    {
//        cout << "admin is logged in" << endl << endl;
//    }
//    
//    wineType tempWine;
//    vector<wineType> wineVect;
//    
//    tempWine.setName("the bubbly");
//    tempWine.setYear(1984);
//    tempWine.setCost(0.50);
//    
//    wineVect.push_back(tempWine);
//    
//    firstUser.adminAddWinery(firstVec, "tylers winery", 11, 11, 6.2, 1, wineVect);
//    
//    //11 is the newest winery that was just added
//    cout << firstVec.at(11).getWineryName() << endl;
//    cout << firstVec.at(11).getWineName(0) << endl << endl;
//    
//    tempWine.setName("addedWine");
//    tempWine.setYear(2222);
//    tempWine.setCost(1.50);
//    firstUser.adminAddWine(firstVec, 11, tempWine);
//    
//    cout << firstVec.at(11).getWineName(1) << endl << endl;

    
    //----this portion is an example of what QT has to do when admin want to add winery-----------------------------------------

//    WineryClass tempWinery;
//    wineType tempWine2;
//    
//    string username = "tyler";
//    string password = "stevens";
//    bool adminOrNot = false;
//
//    UserClass firstUser(username, password);
//    adminOrNot = firstUser.checkValid(username, password);
//
//    if (adminOrNot)
//    {
//        cout << "admin is logged in" << endl << endl;
//    }
//    
//    tempWinery.setWineryName(some name);//whatever admin enters into name field
//    tempWinery.setWineryNumber(firstVec.at(0).getSizeOfDistanceVec()+1);
//    tempWinery.setNumberOfWinerys(firstVec.at(0).getSizeOfDistanceVec()+1);
//    
//    //this loop will add the distances to the temp winery that the admin
//    //specifies not including the final distance which is to itself.
//    //maybe a while loop would work better??
//    for(int i = 0; i < firstVec.at(0).getSizeOfDistanceVec(); i++)
//    {
//        tempWinery.addDistance(some distances from QT)//whatever admin enters for each distance
//    }
//    //this statement will add the final distance which is to itself
//    //if we are adding an 11th winery then the distance to the 11th
//    //from itself should be 0.0
//    tempWinery.addDistance(0.0);
//    
//    tempWinery.setMilesToVilla(some miles to villa);//whatever admin enters into miles to villa field
//    tempWinery.setWinesOffered(some number of wines offered);//whatever admin enters into how many wines offered field
//    
//    for (int i = 0; i < tempWinery.getWinesOffered(); i++)
//    {
//        tempWine2.setName(some wine name from QT);
//        tempWine2.setYear(some wine year from QT);
//        tempWine2.setCost(some wine cost from QT);
//        tempWinery.addWine(tempWine2);
//    }
//    
//    //this is the call to adminAddWinery method in UserClass
//    //it takes our main vector as the first parameter
//    //and the temp winery to be created with QT as the second
//    //parameter
//    firstUser.adminAddWinery(firstVec, tempWinery);
    
    return 0;
}
