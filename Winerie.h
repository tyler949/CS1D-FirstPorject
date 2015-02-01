#include <vector>

#ifndef WINERIE_H_
#define WINERIE_H_

class Winerie
{
	Winerie();
	~Winerie();
	void PrintOnClose() const; // Print list of queues into
						      // the text file
};
#endif
