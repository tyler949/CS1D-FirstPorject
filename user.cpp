#include "user.h"
#include <QDebug>
//---------------------------------------------------------------
user:: user()
{
    username = "";
    password = "";
}
//---------------------------------------------------------------
user::user(string user, string pass)
{
    username = user;
    password = pass;
}
//---------------------------------------------------------------
user::~user()
{

}
//---------------------------------------------------------------
string user:: getpassword()
{
    return password;
}
//---------------------------------------------------------------
string user:: getUsername()
{
    return username;
}
//---------------------------------------------------------------
void user:: setUsername(string user)
{
    username = user;
}
//---------------------------------------------------------------
void user:: setPassword(string pass)
{
    password = pass;
}
//---------------------------------------------------------------
bool user:: checkValid(string user, string pass)
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
//parameters are the mainVector,
//and a tempWinery that QT needs to create with data recieved
//from admin in window
void user::adminAddWinery(vector<WineryClass> &passedFirstVec,
                               WineryClass passedTempWinery)
{
    int sizeOfDistVec;
    WineryClass tempWinery;

    //sizeOfDistanceVec should be == 10 on the first run
    sizeOfDistVec = passedFirstVec.at(0).getSizeOfDistanceVec();

    if (isAdmin)
    {
        for (int i = 0; i < sizeOfDistVec; i++)
        {
            passedFirstVec.at(i).addDistance(passedTempWinery.getDistance(i));
        }
        passedFirstVec.push_back(passedTempWinery);
    }
}
//---------------------------------------------------------------
//parameters are the mainVector,
//an int value (x) to represent which winery,
//and a tempWine that QT needs to create with data recieved
//from admin in window
void user::adminAddWine(vector<WineryClass>& passedFirstVec, int x,
                             wineType passedTempWine)
{
    if (isAdmin)
    {
        passedFirstVec.at(x).addWine(passedTempWine);
    }
}
//---------------------------------------------------------------
//parameters are the mainVector,
//an int value (x) to represent which winery,
//an int value (y) to represent which wine to change the price of,
//and a double value (z) to represent the new price of chosen wine
void user::adminChangePrice(vector<WineryClass> &passedFirstVec, int x,
                                 int y, double z)
{
    if (isAdmin)
    {
        passedFirstVec.at(x).setWineCost(y, z);
    }
}
