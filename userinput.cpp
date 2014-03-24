#include "userinput.h"
#include <cctype>

void UserInput::getUserPlacement(ship &myShip)
{
	char rowName;

	cout << "Where would you like the begining of " << myShip.name << "?" << endl;
	cin >> rowName;
	if (rowName >= 'A' && rowName <= 'J')
	{
		myShip.fore.rowLocation = rowName - 'A';
	}

	cin >> myShip.fore.columnLocation;

	cout << "Which direction? (eg l, r, u, d)" << endl;
	cin >> myShip.direction;
	myShip.direction = toupper(myShip.direction);
	

}



int main()
{
	Board gameBoard;
}

