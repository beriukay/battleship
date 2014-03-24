#include "userinput.h"
#include <cctype>

void UserInput::getUserPlacement(Board game, ship myShip)
{
	int column;
	char rowName;
	int row;
	cout << "Where would you like the begining of " << myShip.name << "?" << endl;
	cin >> rowName;
	rowName = toupper(rowName);
	if (rowName >= 'A' && rowName <= 'J')
		myShip.location.rowBeginLocation = row;

	cin >> column;
	if (column >= 0 && column <= game.getBoardWidth())
		myShip.location.columnBeginLocation = column;

	char direction;
	cout << "Which direction? (eg l, r, u, d)" << endl;
	cin >> direction;
	direction = toupper(direction);
	if (direction == 'L')
	{
		myShip.location.rowEndLocation = row + myShip.size;
	}
	else if (direction == 'R')
	{
		myShip.location.rowEndLocation = row - myShip.size;
	}
	else if (direction == 'U')
	{
		myShip.location.rowEndLocation = column + myShip.size;
	}
	else if (direction == 'D')
	{
		myShip.location.rowEndLocation = column - myShip.size;
	}
}

int main()
{
	Board gameBoard;
}

