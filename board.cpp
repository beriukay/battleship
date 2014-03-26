#include "board.h"

Board::Board(int height, int width) : _boardWidth(width), _boardHeight(height)
{
	_board.resize(_boardHeight * _boardWidth, '.');
}

void Board::populateBoard(vector<Ship> &ships)
{
	for (size_t ii = 0; ii < ships.size(); ++ii)
	{
		if (ships[ii].getDirection() == 'L')
			fillLeft(ships[ii]);
		else if (ships[ii].getDirection() == 'R')
			fillRight(ships[ii]);
		else if (ships[ii].getDirection() == 'U')
			fillUp(ships[ii]);
		else if (ships[ii].getDirection() == 'D')
			fillDown(ships[ii]);
	}
}

void Board::fillLR(Ship theShip, int direction)
{
	for (int spot = 0; spot < theShip.size(); ++spot)
	{
        int calculateRow = theShip.getRow() * _boardWidth;
        int calculateColumn = theShip.getColumn() + (direction * spot);
		_board[calculateRow + calculateColumn] = theShip.getName()[0];
	}
}

void Board::fillUD(Ship theShip, int dir)
{
	for (int spot = 0; spot < theShip.size(); ++spot)
	{
        int calculateRow = (theShip.getRow() + (dir * spot)) * _boardWidth;
		_board[calculateRow + theShip.getColumn()] = theShip.getName()[0];
	}
}

void Board::drawBoard()
{
	for(int i=0; i < _boardHeight; ++i)
	{
		for (int j=0; j < _boardWidth; ++j) 
		{
			cout << _board[_boardWidth * i + j] << " ";
		}
		cout << endl;
	}
}
