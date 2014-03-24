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
	for (int row = starting.rowLocation ; row <=  starting.rowLocation; ++row)
	{
		for (int column = starting.columnLocation ; column <= starting.columnLocation; ++column)
		{
			board[row*10+column] = ships[whichShip];
		}
	}

}

