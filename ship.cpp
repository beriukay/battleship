#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include "ship.h"

void Ship::generateShips()
{
	vector<ship> ships;
	string shipName[] = {"Battleship", "Carrier", "Destroyer", "Patrol ship", "Submarine"};
	int shipSize [] = { 4, 5, 3, 2, 3 };
	for (int whichShip = 0; whichShip < 5; ++whichShip)
	{
		ship newShip;
		newShip.name = shipName[whichShip];
		newShip.size = shipSize[whichShip];
		ships.push_back(newShip);
	}
}

void Ship::placeShips(vector<ship> & ships)
{
	ships.resize(3); 
}

void Ship::setupShips()
{

}
