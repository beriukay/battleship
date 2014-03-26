#include "rules.h"

bool Rules::thisTurn( bool playersTurn , Board opponentsBoard)
{
	UserInput playersInput;
	AttackCoordinates playersAttack;


	attackPrompt();
	playersAttack = playersInput.getUserAttack();
	hitDetection(playersAttack, opponentsBoard);
	return !playersTurn;
}

void Rules::attackPrompt()
{
	cout << "Please enter a valid attack location" <<endl;
}

bool Rules::hitDetection(AttackCoordinates playersAttack , Board opponentsBoard)
{
	bool hit;

	hit = true;

	return hit;
}

