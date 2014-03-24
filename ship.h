#ifndef SHIP_H
#define SHIP_H

#include "board.h"
#include <vector>
using std::vector;
#include <string>
using std::string;

struct ship
{
	string name;
	int size;
	placement bow; //If you don't know nautical terms you shouldn't be reading this code.
	char direction;
};

#endif
