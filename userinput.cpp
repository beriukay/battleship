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

	cout << "Which direction? (eg l, r, u, d)" << endl;
	cin >> myShip.direction;
	myShip.direction = toupper(myShip.direction);
}

vector<ship> UserInput::createShips()
{
	vector<ship> ships;
	vector<string> shipName = { "battleship", "carrier", "destroyer", "patrol ship", "submarine" };
	int shipSize [] = { 4, 5, 3, 2, 3 };

	for (int ii = 0; ii < int(shipName.size()); ++ii)
	{
		ship newShip;
		newShip.name = shipName[ii];
		newShip.size = shipSize[ii];
		getUserPlacement(newShip);
		ships.push_back(newShip);
	}
	return ships;
}

void UserInput::placeShips()
{
	vector<ship> createdShips = createShips();
}



int main()
{
	Board gameBoard;
}

