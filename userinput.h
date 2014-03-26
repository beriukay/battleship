#ifndef USERINPUT_H
#define USERINPUT_H

#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "ship.h"

struct AttackCoordinates
{
	char row;
	int column;
};

class UserInput
{
private:
	bool gameOver;
public:

	int getUserRow(string shipName);
	int getUserColumn(string shipName);
	void getUserPlacement(Ship &);
	AttackCoordinates getUserAttack();
	void  placeShips(vector<Ship> &);
	vector<Ship> setupShips();
	vector<Ship> generateShips();
};

#endif
