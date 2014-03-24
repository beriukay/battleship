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



void Board::placeShip(placement starting, int whichShip)
{
	string ships = "BCDPS";
	for (int row = starting.rowLocation ; row <=  starting.rowLocation; ++row)
	{
		for (int column = starting.columnLocation ; column <= starting.columnLocation; ++column)
		{
			board[row*boardLength + column] = ships[whichShip];
		}
	}

}

