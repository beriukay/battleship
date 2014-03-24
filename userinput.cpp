#include <cctype>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include "board.h"
#include "rules.h"

void getUserPlacement(ship &myShip)
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
	for (auto & whichShip : ships)
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


int main()
{
	rules BattleShip;
	Board playerOneBoard;
	Board playerTwoBoard;
	drawBoard(playerOneBoard);
	vector<ship> playerOnePlacedShips = setupShips();
	vector<ship> playerTwoPlacedShips = setupShips();
	playerOneBoard.populateBoard(playerOnePlacedShips);
	playerTwoBoard.populateBoard(playerTwoPlacedShips);
	
	system ("wait");
}

