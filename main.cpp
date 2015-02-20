

#include "main.h"

int main()
{
    vector<WineryClass> firstVec;
    PropagateVector(firstVec);
    
    for (int i = 0; i < firstVec.size(); i++)
    {
        cout << endl << "test " << i << endl;
        cout << firstVec.at(i).getWineryName();
        cout << endl;
    }
    
    return 0;
}
