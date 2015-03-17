#ifndef USER_H_
#define USER_H_

#include <string>
#include "WineryClass.h"
#include "wineType.h"
using namespace std;

class UserClass
{
public:
    UserClass();
    UserClass(string user, string pass);
    ~UserClass();
    
    string getpassword();
    string getUsername();
    void setUsername(string user);
    void setPassword(string pass);
    bool checkValid(string user, string pass);
    
    //admin methods
    
    //parameters are the mainVector,
    //and a tempWinery that QT needs to create with data recieved
    //from admin in window
    void adminAddWinery(vector<WineryClass> &passedFirstVec,
                        WineryClass passedTempWinery);
    //parameters are the mainVector,
    //an int value (x) to represent which winery,
    //and a tempWine that QT needs to create with data recieved
    //from admin in window
    void adminAddWine(vector<WineryClass>& passedFirstVec, int x,
                      wineType passedWine);
    //parameters are the mainVector,
    //an int value (x) to represent which winery,
    //an int value (y) to represent which wine to change the price of,
    //and a double value (z) to represent the new price of chosen wine
    void adminChangePrice(vector<WineryClass> &passedFirstVec,
                          int x, int y, double z);
    
private:
    string password;
    string username;
    bool isAdmin;
    
};





#endif