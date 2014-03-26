#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
#include "catch.hpp"
#include "board.h"
#include "rules.h"
#include "ship.h"
#include "userinput.h"

void drawBoard(Board b)
{
	vector<char> bCopy = b.getBoard();
	for(int i=0; i < b.getBoardHeight(); ++i)
	{
		for (int j=0; j < b.getBoardWidth(); ++j) 
		{
			cout << bCopy[b.getBoardWidth() * i + j] << " ";
		}
		cout << endl;
	}
}

TEST_CASE( "Board is created", "[board]" ) 
{
	Rules BattleShip;
	Board playerOneBoard;
	Board playerTwoBoard;
	Ship makeShips;
	drawBoard(playerOneBoard);
	vector<ship> playerOnePlacedShips = makeShips.setupShips();
	vector<ship> playerTwoPlacedShips = makeShips.setupShips();
	playerOneBoard.populateBoard(playerOnePlacedShips);
	drawBoard(playerOneBoard);
	//playerTwoBoard.populateBoard(playerTwoPlacedShips);
    //REQUIRE( Factorial(1) == 1 );
}
