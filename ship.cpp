#include "ship.h"


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
