#ifndef BOARD_H
#define BOARD_H
#include <vector>
using std::vector;

class Board
{
private: 
	vector<char> board;

public:

	Board();
	void whereToPlace();
	void placeShip(placement starting, char shipType);
	void placeDestroyer(placement starting);


};

struct placement
{
	int rowBeginLocation;
	int columnBeginLocation;

	int rowEndLocation;
	int columnEndLocation;
};

#endif