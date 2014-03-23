#include "board.h"
#include <vector>
using std::vector;
#include <string>
using std::string;

enum ROWNAME {A,B,C,D,E,F,G,H,I,J};
const int boardLength = 10;
const int boardWidth = 10;

Board::Board()
{
	board.resize(boardLength * boardWidth);
}

void Board::whereToPlace()
{

}


void Board::placeShip(placement starting, int whichShip)
{
	string ships = "CBDSP";
	for (int row = starting.rowBeginLocation ; row <=  starting.rowEndLocation; ++row)
	{
		for (int column = starting.columnBeginLocation ; column <= starting.columnEndLocation; ++column)
		{
			board[row*10+column] = ships[whichShip];
		}
	}

}

int main()
{

	return 0;
}
