#ifndef BOARD_H
#define BOARD_H

#include <vector>
using std::vector;
#include <string>
using std::string;

struct placement
{
	int rowLocation;
	int columnLocation;
};

struct ship
{
	string name;
	int size;
	placement bow; //If you don't know nautical terms you shouldn't be reading this code.
	char direction;
};

class Board
{
private: 
	vector<char> board;
	int boardLength;
	int boardWidth;

public:

	Board(int len=10, int width=10);
	void populateBoard(placement starting, ship currentShip);
	int getBoardLength() { return boardLength; }
	int getBoardWidth() { return boardWidth; }

};

#endif
