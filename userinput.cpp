#include "userinput.h"


void UserInput::getUserPlacement()
{
	cout << "Where would you like the begining of your ship?" << endl;
		cin >> starting.rowBeginLocation;
		cin >> starting.columnBeginLocation;
	cout << "Where would you like the end of your ship to be?" << endl;
		cin >> starting.rowEndLocation;
		cin >> starting.columnEndLocation;
}
