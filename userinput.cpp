#include "userinput.h"
#include <cctype>

void UserInput::getUserPlacement(ship &myShip)
{
	char rowName;

	cout << "Where would you like the begining of " << myShip.name << "?" << endl;
	cin >> rowName;
	if (rowName >= 'A' && rowName <= 'J')
	{
		myShip.location.foreRowLocation = rowName - 'A';
	}

	cin >> myShip.location.foreColumnLocation;

	cout << "Which direction? (eg l, r, u, d)" << endl;
	cin >> myShip.direction;
	myShip.direction = toupper(myShip.direction);
	

}

void setShipAftLocation(ship currentShip)
{
	
	if (currentShip.direction == 'L')
	{
		currentShip.location.aftRowLocation = currentShip.location.foreRowLocation + currentShip.size;
	}
	else if (currentShip.direction == 'R')
	{
		currentShip.location.aftRowLocation = currentShip.location.foreRowLocation - currentShip.size;
	}
	else if (currentShip.direction == 'U')
	{
		currentShip.location.aftColumnLocation = currentShip.location.foreColumnLocation + currentShip.size;
	}
	else if (currentShip.direction == 'D')
	{
		currentShip.location.aftColumnLocation = currentShip.location.foreColumnLocation - currentShip.size;
	}

}

int main()
{
	Board gameBoard;
}

