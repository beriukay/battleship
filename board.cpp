#include "board.h"
#include <vector>
using std::vector;
#include <string>
using std::string;

Board::Board(int height, int width) : _boardWidth(width), _boardHeight(height)
{
	_board.resize(_boardHeight * _boardWidth, 'O');
}


void Board::populateBoard(vector<ship> ships)
{
	for (size_t ii = 0; ii < ships.size(); ++ii)
	{
		if (ships[ii].direction == 'l')
			fillLeft(ships[ii]);
		else if (ships[ii].direction == 'r')
			fillRight(ships[ii]);
		else if (ships[ii].direction == 'u')
			fillUp(ships[ii]);
		else if (ships[ii].direction == 'd')
			fillDown(ships[ii]);
	}
}

void Board::fillLeft(ship theShip)
{
	fillLR(theShip, -1);
}

void Board::fillRight(ship theShip)
{
	fillLR(theShip, 1);
}

void Board::fillLR(ship theShip, int dir)
{
	for (int spot = 0; spot < theShip.size; ++spot)
	{
		_board[theShip.bow.row *_boardWidth + theShip.bow.column + dir * spot];
	}
}

void Board::fillUp(ship theShip)
{
	fillUD(theShip, -1);
}

void Board::fillDown(ship theShip)
{
	fillUD(theShip, 1);
}

void Board::fillUD(ship theShip, int dir)
{
	for (int spot = 0; spot < theShip.size; ++spot)
	{
		_board[(theShip.bow.row + dir * spot) *_boardWidth + theShip.bow.column];
	}
}
