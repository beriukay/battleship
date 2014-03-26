#include "ship.h"


//string shipName[] = {"Battleship", "Carrier", "Destroyer", "Patrol ship", "Submarine"};
//int shipSize [] = { 4, 5, 3, 2, 3 };
BattleFleet::BattleFleet(vector<int> shipChoices) : _battleFleet()
	{
		enum ShipValues {BATTLESHIP, CARRIER, DESTROYER, PTBOAT, SUBMARINE};
		for (int shipChoice : shipChoices)
		{
			switch(ShipValues(shipChoice))
			{
				case BATTLESHIP:
					_battleFleet.push_back(Battleship());
					break;
				default:
					break;
			}
		}

	}
