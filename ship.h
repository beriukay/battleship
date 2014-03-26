#ifndef SHIP_H
#define SHIP_H

#include <string>
using std::string;
#include "board.h"

class UserInput
{
private:
	vector<ship> _ships;
public:
	void  placeShips(vector<ship> &);
	void setupShips();
	void generateShips();
};

#endif
