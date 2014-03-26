#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
#include "catch.hpp"
#include "board.h"
#include "userinput.h"
#include "rules.h"

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
	drawBoard(playerOneBoard);
	vector<ship> playerOnePlacedShips = setupShips();
	vector<ship> playerTwoPlacedShips = setupShips();
	playerOneBoard.populateBoard(playerOnePlacedShips);
	drawBoard(playerOneBoard);
	//playerTwoBoard.populateBoard(playerTwoPlacedShips);
    //REQUIRE( Factorial(1) == 1 );
}
