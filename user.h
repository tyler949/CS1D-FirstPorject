#ifndef USER_H_
#define USER_H_
#include <string>
using namespace std;
class user
{
public : user();
user(string user, string pass);
~user();
string getpassword();
string getUsername();
void setUsername(string user);
void setPassword(string pass);
bool checkValid(string user, string pass);
private : string password;
string username;
};
#endif
