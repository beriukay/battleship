#include "board.h"
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iostream>

Board::Board(int height, int width) : _boardWidth(width), _boardHeight(height)
{
	_board.resize(_boardHeight * _boardWidth, '.');
}

void Board::populateBoard(vector<ship> &ships)
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

void Board::fillLR(ship theShip, int dir)
{
	for (int spot = 0; spot < theShip.size; ++spot)
	{
		_board[theShip.bow.row *_boardWidth + theShip.bow.column + dir * spot] =
			theShip.name[0];
	}
}

void Board::fillUD(ship theShip, int dir)
{
	for (int spot = 0; spot < theShip.size; ++spot)
	{
		_board[(theShip.bow.row + (dir * spot)) *_boardWidth + theShip.bow.column] =
			theShip.name[0];
	}
}
