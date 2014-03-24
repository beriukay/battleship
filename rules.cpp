#include "board.h"
#include "userinput.h"
#include "rules.h"

bool thisTurn( bool playersTurn)
{
	//attackPrompt();

	return !playersTurn;
}

void attackPrompt()
{
	cout << "Please enter a valid attack location" <<endl;
}

void collisionDetection()
{

}

