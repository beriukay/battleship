#include "userinput.h"
#include <cctype>
#include <string>
using std::string;

void UserInput::getUserPlacement(ship &myShip)
{
	char rowName;

	cout << "Where would you like the begining of " << myShip.name << "?" << endl;
	cin >> rowName;
	if (rowName >= 'A' && rowName <= 'J')
	{
		myShip.bow.rowLocation = rowName - 'A';
	}

	cin >> myShip.bow.columnLocation;

	char direction;
	cout << "Which direction? (eg l, r, u, d)" << endl;
	string possibleDirections = "lrud";
	cin >> direction;
	if (possibleDirections.find(direction))
	{
		myShip.direction = toupper(myShip.direction);
	}
}

vector<ship> UserInput::createShips()
{
	vector<ship> ships;
	string shipName[5] = { "battleship", "carrier", "destroyer", "patrol ship", "submarine" };
	int shipSize [] = { 4, 5, 3, 2, 3 };

	for (int ii = 0; ii < 5; ++ii)
	{
		ship newShip;
		newShip.name = shipName[ii];
		newShip.size = shipSize[ii];
		getUserPlacement(newShip);
		ships.push_back(newShip);
	}
	return ships;
}

void UserInput::placeShips(Board & gameBoard)
{
	vector<ship> createdShips = createShips();

	for (int iii = 0; iii < createdShips.size() ; iii++)
	{
	gameBoard.populateBoard(createdShips[iii]);
	}
}



int main()
{
	Board gameBoard;
}

