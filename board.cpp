#include "board.h"
#include <vector>
using std::vector;

enum ROWNAME {A,B,C,D,E,F,G,H,I,J};

Board::Board()
{
	board.resize(10 * 10);
}

void Board::whereToPlace()
{

}


void Board::placeShip(placement starting, char shipType)
{
	for (int row = starting.rowBeginLocation ; row <=  starting.rowEndLocation; ++row)
	{
		for (int column = starting.columnBeginLocation ; column <= starting.columnEndLocation; ++column)
		{
			board[row*10+column] = shipType;
		}
	}

}

void Board::placeDestroyer(placement starting)
{
	placeShip(starting, 'D');
}


int main()
{

	return 0;
}
