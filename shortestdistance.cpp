
#include "WineryClass.h"
void shortestDistance(vector<WineryClass> winvec, int start, int num, vector<WineryClass> &tripvec)
{
	double smallest = 9999;
	int smallestPntr;
	int k = start;
	tripvec.push_back(winvec.at(start));
	winvec.at(start).vist();

	for(int i = 0; i < num; i++)
	{
		WineryClass temp = winvec.at(k);
		for(int count = 0; count < winvec.size(); count++)
		{
			if(smallest > temp.getDistance(count)  && !(winvec.at(count).getVisted()))
			{
				smallest = temp.getDistance(count);
				smallestPntr = count;
			}
		}

		tripvec.push_back(winvec.at(smallestPntr));
		winvec.at(smallestPntr).vist();
		k = smallestPntr;
		smallest = 999999;
	}

}
