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
				case CARRIER:
					_battleFleet.push_back(Carrier());
					break;
				case DESTROYER:
					_battleFleet.push_back(Destroyer());
					break;
				case PTBOAT:
					_battleFleet.push_back(PTBoat());
					break;
				case SUBMARINE:
					_battleFleet.push_back(Submarine());
					break;
				Default:
					break;
			}
		}

	}
