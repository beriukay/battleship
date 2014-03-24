//#include "userinput.h"
#include <cctype>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include "board.h"

void getUserPlacement(ship &myShip)
{
	char rowName;

	cout << "Where would you like the begining of " << myShip.name << "?" << endl;
	cin >> rowName;
	if (rowName >= 'A' && rowName <= 'J')
	{
		myShip.bow.row = rowName - 'A';
	}

	cin >> myShip.bow.column;

	char direction;
	cout << "Which direction? (eg l, r, u, d)" << endl;
	string possibleDirections = "lrud";
	cin >> direction;
	if (possibleDirections.find(direction))
	{
		myShip.direction = toupper(myShip.direction);
	}
}

vector<ship> generateShips()
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
	return ships;
}

void placeShips(vector<ship> & ships)
{
	for (auto whichShip : ships)
	{
		getUserPlacement(whichShip);
	}
}

vector<ship> setupShips()
{
	vector<ship> createdShips = generateShips();
	placeShips(createdShips);
	return createdShips;
}



int main()
{
	Board gameBoard;
	vector<ship> userPlacedShips = setupShips();
	gameBoard.populateBoard(userPlacedShips);
	
}

