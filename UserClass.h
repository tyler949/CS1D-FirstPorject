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
    void adminAddWinery(vector<WineryClass>& passedFirstVec,
                        string passedName, int passedWineryNumber,
                        int passedNumberOfWinerys,
                        double passedMilesToVilla,
                        int passedWinesOffered,
                        vector<wineType> passedWineVec);
    //x denotes which winery to add a wine to
    void adminAddWine(vector<WineryClass>& passedFirstVec, int x,
                      wineType passedWine);
    
private:
    string password;
    string username;
    bool isAdmin;
    
};





#endif