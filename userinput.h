#ifndef USERINPUT_H
#define USERINPUT_H

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "board.h"
#include "ship.h"

class UserInput
{
public:

	void getUserPlacement(ship &);
	void  placeShips(vector<ship> &);
	vector<ship> setupShips();
	vector<ship> generateShips();
};

#endif
