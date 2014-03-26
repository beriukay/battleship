#include "rules.h"

bool Rules::thisTurn( bool playersTurn)
{

	attackPrompt();


	return !playersTurn;
}

void Rules::attackPrompt()
{
	cout << "Please enter a valid attack location" <<endl;
}

void Rules::hitDetection()
{

}

