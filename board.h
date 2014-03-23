#ifndef BOARD_H
#define BOARD_H
#include <vector>
using std::vector;

struct placement
{
	int rowBeginLocation;
	int columnBeginLocation;

	int rowEndLocation;
	int columnEndLocation;
};

class Board
{
private: 
	vector<char> board;

public:

	Board();
	void whereToPlace();
	void placeShip(placement starting, int whichShip);

};


#endif
