#ifndef USERINPUT_H
#define USERINPUT_H
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "board.h"

class UserInput
{
private:
	
	placement starting;

public:

	void getUserPlacement();
};


#endif
