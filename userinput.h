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
	placement fore; //If you don't know nautical terms you shouldn't be reading this code.
	char direction;
};

class UserInput
{
public:

	void getUserPlacement(ship &);
};


#endif
