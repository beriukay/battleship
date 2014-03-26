#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
#include "catch.hpp"
#include "board.h"
#include "rules.h"
#include "ship.h"
#include "userinput.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


TEST_CASE( "Board is created", "[board]" ) 
{
	//Rules BattleShip;
	Board playerOneBoard;
    vector<char> blankScreen(100, '.');
    REQUIRE( playerOneBoard.getBoard() == blankScreen);

    int bigger = 100;
    Board bigBoard(bigger, bigger);
    blankScreen.resize(bigger * bigger, '.');
    REQUIRE( bigBoard.getBoard() == blankScreen);

	

}
/* Commented out while Tests are performed.

int main()
{
	Board playerOneBoard;
	Board playerTwoBoard;
	UserInput keyboardInput;
	playerTwoBoard.drawBoard();
	vector<Ship> playerOnePlacedShips = keyboardInput.setupShips();
	vector<Ship> playerTwoPlacedShips = keyboardInput.setupShips();
	playerOneBoard.populateBoard(playerOnePlacedShips);
	playerTwoBoard.populateBoard(playerTwoPlacedShips);
	
	system ("wait");


}
*/