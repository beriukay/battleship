#include "board.h"
#include <vector>
using std::vector;
#include <string>
using std::string;


Board::Board(int len, int width)
{
	boardLength = len;
	boardWidth = width;
	board.resize(boardLength * boardWidth);
}

void Board::whereToPlace()
{

}


void Board::placeShip(placement starting, int whichShip)
{
	string ships = "CBDSP";
	for (int row = starting.foreRowLocation ; row <=  starting.aftRowLocation; ++row)
	{
		for (int column = starting.foreColumnLocation ; column <= starting.aftColumnLocation; ++column)
		{
			board[row*10+column] = ships[whichShip];
		}
	}

}

