#include "rules.h"

bool Rules::thisTurn( bool playersTurn)
{
	UserInput playersInput;
	AttackCoordinates playersAttack;
	attackPrompt();
	playersAttack = playersInput.getUserAttack();

	return !playersTurn;
}

void Rules::attackPrompt()
{
	cout << "Please enter a valid attack location" <<endl;
}

void Rules::hitDetection()
{

}

