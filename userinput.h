#ifndef USERINPUT_H
#define USERINPUT_H
#include <iostream>
#include "board.h"

using std::cout;
using std::cin;
using std::endl;

class UserInput
{
private:
	
	placement starting;

public:

	void getUserPlacement();
};


#endif