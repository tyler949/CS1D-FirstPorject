#include "wine.h"
wineType:: wineType()
{
    name ="";
    cost = 0;
    year =0;
}
wineType:: ~wineType()
{

}
string wineType:: getName(){
    return name;
}
void wineType:: setName(string str){
    name = str;
}
double wineType:: getCost()
{
    return cost;
}
void wineType:: setCost(double num)
{
    cost = num;
}
double wineType:: getYear()
{
    return year;
}
void wineType:: setYear(int num)
{
    year = num;
}