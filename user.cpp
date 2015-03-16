#include "user.h"
user:: user()
{
username = "Jerry";
password = "Rocks";
}
user::user(string user, string pass)
{
username = user;
password == pass;
}
user::~user()
{
}
string user:: getpassword()
{
return password;
}
string user:: getUsername()
{
return username;
}
void user:: setUsername(string user)
{
username = user;
}
void user:: setPassword(string pass)
{
password = pass;
}
bool user:: checkValid(string user, string pass)
{
bool temp;
if(username == user && password == pass)
{
temp = true;
}
else
{
temp = false;
}
return temp;
}

