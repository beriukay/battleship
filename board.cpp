#include "board.h"
#include <vector>
using std::vector;
#include <string>
using std::string;

Board::Board(int height, int width) : _boardWidth(width), _boardHeight(height)
{
	_board.resize(_boardHeight * _boardWidth, 'O');
}


void Board::populateBoard(ship currentShip)
{
	for (int ii = 0; ii < currentShip.size; ++ii)
	{
				
	}
}

	
