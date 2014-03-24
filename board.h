#ifndef BOARD_H
#define BOARD_H
#include <vector>
using std::vector;


struct placement
{
	int foreRowLocation;
	int foreColumnLocation;

	int aftRowLocation;
	int aftColumnLocation;
};

class Board
{
private: 
	vector<char> board;
	int boardLength;
	int boardWidth;

public:

	Board(int len=10, int width=10);
	void whereToPlace();
	void placeShip(placement starting, int whichShip);
	int getBoardLength() { return boardLength; }
	int getBoardWidth() { return boardWidth; }


};


#endif
