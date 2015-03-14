#ifndef WINE_H_
#define WINE_H_
#include <string>
using namespace std;

class wineType
{
    public: wineType();
            ~wineType();
            string getName();
            void setName(string str);
            double getCost();
            void setCost(double num);
            double getYear();
            void setYear(int num);

    private: string name;
             double cost;
             int year;

};




#endif /* WINE_H_ */
