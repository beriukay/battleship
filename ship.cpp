#include "ship.h"

void BattleFleet::generateShips()
{
	vector<Ship> ships;
	string shipName[] = {"Battleship", "Carrier", "Destroyer", "Patrol ship", "Submarine"};
	int shipSize [] = { 4, 5, 3, 2, 3 };
	for (int whichShip = 0; whichShip < 5; ++whichShip)
	{
		Ship newShip;
		newShip.name = shipName[whichShip];
		newShip.size = shipSize[whichShip];
		ships.push_back(newShip);
	}
}

void BattleFleet::placeShips(vector<Ship> & ships)
{
	ships.resize(3); 
}

vector<Ship> BattleFleet::setupShips()
{
	vector<Ship> userShips;
	return userShips;
}
