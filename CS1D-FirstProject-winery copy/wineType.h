
#ifndef WINE_H_
#define WINE_H_
#include <string>;
using namespace std;
class wineType
{
public:
    wineType();
    ~wineType();
    
    string  getName();
    double  getCost();
    double  getYear();
    
    void    setName(string str);
    void    setCost(double num);
    void    setYear(int num);
    
private:
    string  name;
    double  cost;
    int     year;
};
#endif
