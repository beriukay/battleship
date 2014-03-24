#ifndef USERINPUT_H
#define USERINPUT_H
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "board.h"


struct ship
{
	string name;
	int size;
	placement location;
};

class UserInput
{
private:
	
	placement starting;

public:

	void getUserPlacement(Board, ship);
};


#endif