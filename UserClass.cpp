#include "UserClass.h"

//---------------------------------------------------------------
UserClass:: UserClass()
{
    username = "";
    password = "";
}
//---------------------------------------------------------------
UserClass::UserClass(string user, string pass)
{
    username = user;
    password = pass;
}
//---------------------------------------------------------------
UserClass::~UserClass()
{
    
}
//---------------------------------------------------------------
string UserClass:: getpassword()
{
    return password;
}
//---------------------------------------------------------------
string UserClass:: getUsername()
{
    return username;
}
//---------------------------------------------------------------
void UserClass:: setUsername(string user)
{
    username = user;
}
//---------------------------------------------------------------
void UserClass:: setPassword(string pass)
{
    password = pass;
}
//---------------------------------------------------------------
bool UserClass:: checkValid(string user, string pass)
{
    bool temp;
    
    if(username == user && password == pass)
    {
        temp = true;
        isAdmin = true;
    }
    else
    {
        temp = false;
    }
    
    return temp;
}
//---------------------------------------------------------------
//passedWineVec should be a vector from QT if how many wines they wanted
//to add to the new winery
void UserClass::adminAddWinery(vector<WineryClass>& passedFirstVec,
                               string passedName, int passedWineryNumber,
                               int passedNumberOfWinerys,
                               double passedMilesToVilla,
                               int passedWinesOffered,
                               vector<wineType> passedWineVec)
{
    double tempDistance;
    int sizeOfDistVec;
    WineryClass tempWinery;
    wineType tempWine;
    
    sizeOfDistVec = passedFirstVec.at(0).getSizeOfDistanceVec();
    
    if (isAdmin)
    {
        tempWinery.setWineryName(passedName);
        tempWinery.setWineryNumber(passedWineryNumber);
        tempWinery.setNumberOfWinerys(passedNumberOfWinerys);
        tempWinery.setMilesToVilla(passedMilesToVilla);
        tempWinery.setWinesOffered(passedWinesOffered);
        
        //this adds random distances from itself to the other wineries
        for (int i = 0; i < sizeOfDistVec; i++)
        {
            tempDistance = ((double) rand() / (double) rand());
            tempWinery.addDistance(tempDistance);
            passedFirstVec.at(i).addDistance(tempDistance);
        }
        //to add the distance last to itself
        tempWinery.addDistance(0.0);
        
        //this is taking the passed wine vector from QT that the admin
        //created and adding it to tempWine. it is then added to
        //tempWinery
        for (int i = 0; i < passedWinesOffered; i++)
        {
            tempWine.setYear(passedWineVec.at(i).getYear());
            tempWine.setCost(passedWineVec.at(i).getCost());
            tempWine.setName(passedWineVec.at(i).getName());
            tempWinery.addWine(tempWine);
        }
        
        passedFirstVec.push_back(tempWinery);
    }
}
//---------------------------------------------------------------
//this needs QT to take which winery to add a wine to and create a wineType
//node and add whats the wines name, whats the wines year, and whats
//the wines cost. then pass it to this function
void UserClass::adminAddWine(vector<WineryClass>& passedFirstVec, int x,
                             wineType passedWine)
{
    if (isAdmin)
    {
        passedFirstVec.at(x).addWine(passedWine);
    }
}