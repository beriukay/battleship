#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
//#include "catch.hpp"
#include "board.h"
#include "rules.h"
#include "ship.h"
#include "userinput.h"
#include <iostream>
using std::cout;
using std::endl;

/*
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

TEST_CASE( "Making ships", "[ships]")
{
	vector<int> justABattleship (1,0);
	BattleFleet oneBattleship(justABattleship);
	vector<Ship> madeABattleship = oneBattleship.getFleet();
	cout << "name: " << madeABattleship[0].getName() << endl;
	REQUIRE(madeABattleship[0].getName() == "Battleship");
	REQUIRE(madeABattleship[0].size() == 4);

	vector<int> justACarrier (1,1);
	BattleFleet oneCarrier(justACarrier);
	vector<Ship> madeACarrier = oneCarrier.getFleet();
	cout << "name: " << madeACarrier[0].getName() << endl;
	REQUIRE(madeACarrier[0].getName() == "Carrier");
	REQUIRE(madeACarrier[0].size() == 5);

	vector<int> justADestroyer (1,2);
	BattleFleet oneDestroyer(justADestroyer);
	vector<Ship> madeADestroyer = oneDestroyer.getFleet();
	cout << "name: " << madeADestroyer[0].getName() << endl;
	REQUIRE(madeADestroyer[0].getName() == "Destroyer");
	REQUIRE(madeADestroyer[0].size() == 3);

	vector<int> justAPTBoat (1,3);
	BattleFleet onePTBoat(justAPTBoat);
	vector<Ship> madeAPTBoat = onePTBoat.getFleet();
	cout << "name: " << madeAPTBoat[0].getName() << endl;
	REQUIRE(madeAPTBoat[0].getName() == "PTBoat");
	REQUIRE(madeAPTBoat[0].size() == 2);

	vector<int> justASubmarine (1,4);
	BattleFleet oneSubmarine(justASubmarine);
	vector<Ship> madeASubmarine = oneSubmarine.getFleet();
	cout << "name: " << madeASubmarine[0].getName() << endl;
	REQUIRE(madeASubmarine[0].getName() == "Submarine");
	REQUIRE(madeASubmarine[0].size() == 3);




} */




int main()
{
	Board playerOneBoard;
	Board playerTwoBoard;
	UserInput keyboardInput;
	const vector <int> defaultFleet(5);
	BattleFleet battleFleet(defaultFleet);
	system ("wait");


}

