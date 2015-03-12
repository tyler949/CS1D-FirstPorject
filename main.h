

#ifndef CS1D_FirstProject_winery_main_h
#define CS1D_FirstProject_winery_main_h

#include <iostream>
#include <vector>
#include <iomanip>
#include "WineryClass.h"
#include "UserClass.h"
using namespace std;

void PropagateVector(vector<WineryClass>& passedFirstVec);
void shortestDistance(vector<WineryClass> winvec, int start, int num,
                      vector<WineryClass> &tripvec);

#endif
