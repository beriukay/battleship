#include <cctype>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include "board.h"
#include "rules.h"

void UserInput::getUserPlacement(Ship &myShip)
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

AttackCoordinates UserInput::getUserAttack()
{
	AttackCoordinates playersAttack;
	char rowName = 'z';
	while (!(toupper(rowName) >= 'A' && toupper(rowName) <= 'J'))
	{
	cout<< "Please enter the row you would like to attack:"<<endl;
	cin >> playersAttack.row;
	}

	cout<< "Please enter the row you would like to attack:"<<endl;
	cin >> playersAttack.column;

	return playersAttack;
	
}

vector<Ship> UserInput::generateShips()
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

void UserInput::placeShips(vector<Ship> & ships)
{
	for (auto & whichShip : ships)
	{
		getUserPlacement(whichShip);
	}
}

vector<Ship> UserInput::setupShips()
{
	vector<Ship> createdShips = generateShips();
	placeShips(createdShips);
	return createdShips;
}




