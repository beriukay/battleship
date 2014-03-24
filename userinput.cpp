#include "userinput.h"
#include <cctype>

Board UserInput::getUserPlacement(ship myShip)
{
	Board gameBoard;
	int column;
	char rowName;
	int row;
	cout << "Where would you like the begining of " << myShip.name << "?" << endl;
	cin >> rowName;
	rowName = toupper(rowName);
	if (rowName >= 'A' && rowName <= 'J')
	{
		row = rowName - 'A';
		myShip.location.rowBeginLocation = row;
	}


	cin >> column;
	if (column >= 0 && column <= gameBoard.getBoardWidth())
	{
		myShip.location.columnBeginLocation = column;
	}

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
		myShip.location.columnEndLocation = column + myShip.size;
	}
	else if (direction == 'D')
	{
		myShip.location.columnEndLocation = column - myShip.size;
	}

	return gameBoard;
}

int main()
{
	Board gameBoard;
}

