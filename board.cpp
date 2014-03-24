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



void Board::populateBoard(ship currentShip)
{

}

