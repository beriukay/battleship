#include <cctype>
#include "userinput.h"

int UserInput::getUserRow(string msg)
{
	char rowName = 'z';
	while (!(rowName >= 'A' && rowName <= 'J'))
	{
		cout << msg << endl;
		cin >> rowName;
		rowName = toupper(rowName);
	}
	return (int)rowName - 'A';
}

int UserInput::getUserColumn(string msg)
{
	int col = -1;
	while (!(col >= 0 && col < 10))
	{
		cout << msg << endl;
		cin >> col;
	}
	return col;
}

void UserInput::getUserPlacement(Ship &myShip)
{
	int bowRow = getUserRow("Which row would you like the bow of " + myShip.getName() + "?");
	int bowCol = getUserColumn("Which column would you like the bow?");
	myShip.setRow(bowRow);
	myShip.setColumn(bowCol);

		char direction;
		cout << "Which direction? (eg l, r, u, d)" << endl;
		cin >> direction;
		myShip.setDirection(toupper(direction));
}

AttackCoordinates UserInput::getUserAttack()
{
	AttackCoordinates playerAttack;
	playerAttack.row = getUserRow("Please enter the row you would like to attack:");
	playerAttack.column = getUserColumn("Please enter the column you would like to attack:");

	return playerAttack;
}
