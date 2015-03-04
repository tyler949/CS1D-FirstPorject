
#ifndef WINE_H_
#define WINE_H_

#include <string>
using namespace std;

class wineType
{
public:
    wineType();
    ~wineType();

    string  getName();
    int     getYear();
    double  getCost();

    void    setName(string passedName);
    void    setYear(int passedYear);
    void    setCost(double passedCost);

private:
    string  name;
    int     year;
    double  cost;

};
#endif
