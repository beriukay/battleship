#ifndef SHIP_H
#define SHIP_H

#include <string>
using std::string;
#include <vector>
using std::vector;

struct coordinates
{
	int row;
	int column;
};

struct Ship
{
	string name;
	int size;
	coordinates bow; //If you don't know nautical terms you shouldn't be reading this code.
	char direction;
};

class BattleFleet
{
private:
	vector<Ship> _BattleFleet;
public:
	void  placeShips(vector<Ship> &);
	vector<Ship> setupShips();
	void generateShips();
};

#endif
