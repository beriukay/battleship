#ifndef USERINPUT_H
#define USERINPUT_H

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "board.h"


class UserInput
{
private:
	bool gameOver;
public:

	void getUserPlacement(Ship &);
	void  placeShips(vector<Ship> &);
	vector<Ship> setupShips();
	vector<Ship> generateShips();
};

#endif
