#include "rules.h"

bool Rules::thisTurn( bool playersTurn , Board opponentsBoard)
{
	UserInput playersInput;
	AttackCoordinates playersAttack;


	attackPrompt();
	playersAttack = playersInput.getUserAttack();
	bool hit = hitDetection(playersAttack, opponentsBoard);

	return !playersTurn;
}

void Rules::attackPrompt()
{
	cout << "Please enter a valid attack location" <<endl;
}

bool Rules::hitDetection(AttackCoordinates playersAttack , Board opponentsBoard)
{
	bool hit;
	int attackLocation;
	int calculateRow = playersAttack.row * opponentsBoard.getBoardWidth();
    int calculateColumn = playersAttack.column;
	
	attackLocation = calculateColumn = calculateColumn;

	if ( opponentsBoard._board[attackLocation] != '.' )
	hit = true;
	else
	hit = false;

	return hit;
}

bool Rules::endOfGame(Board opponentsBoard)
{
	bool isEnd = false;
	int boardSize;

	boardSize = opponentsBoard.getBoardHeight();
	boardSize *= opponentsBoard.getBoardWidth();

	for (int boardIterator = 0 ; boardIterator < boardSize ; ++boardIterator)
	{
		if (opponentsBoard._board[boardIterator] != '.')
			return(!isEnd);
	}

	return (isEnd);
}
