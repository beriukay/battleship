#ifndef SHIP_H
#define SHIP_H

#include <string>
using std::string;
#include "board.h"

class Ship
{
private:
	vector<ship> _ships;
public:
	void  placeShips(vector<ship> &);
	vector<ship> setupShips();
	void generateShips();
};

#endif
