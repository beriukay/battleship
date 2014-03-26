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
		char boardSymbol = theShip.getName()[0];
		_board[calculateRow + calculateColumn] = boardSymbol;
	}
}

void Board::fillUD(Ship theShip, int dir)
{
	for (int spot = 0; spot < theShip.size(); ++spot)
	{
        int calculateRow = (theShip.getRow() + (dir * spot)) * _boardWidth;
		char boardSymbol = theShip.getName()[0];
		_board[calculateRow + theShip.getColumn()] = boardSymbol;
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
