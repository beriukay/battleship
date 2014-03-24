#ifndef BOARD_H
#define BOARD_H
#include <vector>
using std::vector;


struct placement
{
	int rowLocation;
	int columnLocation;
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
