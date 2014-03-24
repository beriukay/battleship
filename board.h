#ifndef BOARD_H
#define BOARD_H

#include <vector>
using std::vector;
#include <string>
using std::string;

struct coordinates
{
	int rowLocation;
	int columnLocation;
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
	void populateBoard(ship currentShip);
	int getBoardWidth() { return _boardWidth; }
	int getBoardHeight() { return _boardHeight; }
	vector<char> getBoard() { return _board; }

};

#endif
