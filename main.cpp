#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
#include "catch.hpp"
#include "board.h"
#include "rules.h"
#include "ship.h"
#include "userinput.h"
#include <iostream>
using std::cout;
using std::endl;


TEST_CASE( "Board is created", "[board]" ) 
{
	//Rules BattleShip;
	Board playerOneBoard;
    //playerOneBoard.drawBoard();
    vector<char> blankScreen(100, '.');
    REQUIRE( playerOneBoard.getBoard() == blankScreen);
	//drawBoard(playerOneBoard);
	//vector<Ship> playerOnePlacedShips = makeShips.setupShips();
	//playerOneBoard.populateBoard(playerOnePlacedShips);
    //REQUIRE( Factorial(1) == 1 );
}