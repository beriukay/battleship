#ifndef BOARD_H
#define BOARD_H

#include "ship.h"
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;


class Board
{
private: 
	vector<char> _board;
	int _boardWidth;
	int _boardHeight;

public:

	Board(int len=10, int width=10);
	void populateBoard(vector<Ship> & ships);
	void fillLeft(Ship currentShip) { fillLR(currentShip, -1); }
	void fillRight(Ship currentShip) { fillLR(currentShip, 1); }
	void fillLR(Ship theShip, int dir);
	void fillUp(Ship currentShip) { fillUD(currentShip, -1); }
	void fillDown(Ship currentShip) { fillUD(currentShip, 1); }
	void fillUD(Ship theShip, int dir);
    void drawBoard();
	int getBoardWidth() { return _boardWidth; }
	int getBoardHeight() { return _boardHeight; }
	vector<char> getBoard() { return _board; }

};

#endif
