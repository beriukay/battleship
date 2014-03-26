#include "board.h"

Board::Board(int height, int width) : _boardWidth(width), _boardHeight(height)
{
	_board.resize(_boardHeight * _boardWidth, '.');
}

void Board::populateBoard(vector<Ship> &ships)
{
	for (size_t ii = 0; ii < ships.size(); ++ii)
	{
		if (ships[ii].direction == 'L')
			fillLeft(ships[ii]);
		else if (ships[ii].direction == 'R')
			fillRight(ships[ii]);
		else if (ships[ii].direction == 'U')
			fillUp(ships[ii]);
		else if (ships[ii].direction == 'D')
			fillDown(ships[ii]);
	}
}

void Board::fillLR(Ship theShip, int direction)
{
	for (int spot = 0; spot < theShip.size; ++spot)
	{
        int calculateRow = theShip.bow.row * _boardWidth;
        int calculateColumn = theShip.bow.column + (direction * spot);
		_board[calculateRow + calculateColumn] = theShip.name[0];
	}
}

void Board::fillUD(Ship theShip, int dir)
{
	for (int spot = 0; spot < theShip.size; ++spot)
	{
        int calculateRow = (theShip.bow.row + (dir * spot)) * _boardWidth;
		_board[calculateRow + theShip.bow.column] = theShip.name[0];
	}
}

void Board::drawBoard()
{
	for(int rowIterator =0; rowIterator < _boardHeight; ++rowIterator)
	{
		for (int columnIterator =0; columnIterator < _boardWidth; ++columnIterator) 
		{
			cout << _board[_boardWidth * rowIterator + columnIterator] << " ";
		}
		cout << endl;
	}
}

void Board::updateBoard(AttackCoordinates playersAttack, Board opponentsBoard)
{


}