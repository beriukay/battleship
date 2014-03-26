#include <cctype>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include "board.h"
#include "rules.h"

void getUserPlacement(Ship &myShip)
{
	char rowName = 'z';
	while (!(toupper(rowName) >= 'A' && toupper(rowName) <= 'J'))
	{
		cout << "Which row would you like the bow of " << myShip.name << "?" << endl;
		cin >> rowName;
		myShip.bow.row = (int)toupper(rowName)- 'A';
	}

	while (!(myShip.bow.column > 0 && myShip.bow.column < 10))
	{
		cout << "Which column would you like the bow of " << myShip.name << "?" << endl;
		cin >> myShip.bow.column;
	}
		char direction;
		cout << "Which direction? (eg l, r, u, d)" << endl;
		cin >> direction;
		myShip.direction = toupper(direction);
}

vector<Ship> generateShips()
{
	vector<Ship> fleet;
	string shipName[] = {"Battleship", "Carrier", "Destroyer", "Patrol ship", "Submarine"};
	int shipSize [] = { 4, 5, 3, 2, 3 };
	for (int whichShip = 0; whichShip < 5; ++whichShip)
	{
		Ship newShip;
		newShip.name = shipName[whichShip];
		newShip.size = shipSize[whichShip];
		fleet.push_back(newShip);
	}
	return fleet;
}

void placeShips(vector<Ship> & ships)
{
	for (auto & whichShip : ships)
	{
		getUserPlacement(whichShip);
	}
}

vector<Ship> setupShips()
{
	vector<Ship> createdShips = generateShips();
	placeShips(createdShips);
	return createdShips;
}

void drawBoard(Board b)
{
	vector<char> bCopy = b.getBoard();
	for(int i=0; i < b.getBoardHeight(); ++i)
	{
		for (int j=0; j < b.getBoardWidth(); ++j) 
		{
			cout << bCopy[b.getBoardWidth() * i + j] << " ";
		}
		cout << endl;
	}
}



