#ifndef BOARD_H
#define BOARD_H

#include <vector>
using std::vector;
#include <string>
using std::string;

struct coordinates
{
	int row;
	int column;
};

struct ship
{
	string name;
	int size;
	coordinates bow; //If you don't know nautical terms you shouldn't be reading this code.
	char direction;
};

class Board
{
private: 
	vector<char> _board;
	int _boardWidth;
	int _boardHeight;

public:

	Board(int len=10, int width=10);
	void populateBoard(vector<ship> & ships);
	void fillLeft(ship currentShip) { fillLR(currentShip, -1); }
	void fillRight(ship currentShip) { fillLR(currentShip, 1); }
	void fillLR(ship theShip, int dir);
	void fillUp(ship currentShip) { fillUD(currentShip, -1); }
	void fillDown(ship currentShip) { fillUD(currentShip, 1); }
	void fillUD(ship theShip, int dir);
	int getBoardWidth() { return _boardWidth; }
	int getBoardHeight() { return _boardHeight; }
	vector<char> getBoard() { return _board; }

};

#endif
