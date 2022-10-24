#ifndef ACTION_H
#define ACTION_H

#include <iostream>
using namespace std;
#include <ctype.h>
#include <cstring>
#include <string>
std::string name;

class Action
{
	public:

		static int removeTicket(int x)
		{
	    	int pt;
	    
	    	pt = 5 - x;
	    
	    	cout << "\t\t\t\t\t\tPyramid Tickets left:" << pt << "\n";
	    
	    	return pt;
		}
			
};

#endif