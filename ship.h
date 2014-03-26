#ifndef SHIP_H
#define SHIP_H

#include <string>
using std::string;
#include <vector>
using std::vector;
#include <memory>

struct coordinates
{
	int row;
	int column;
};

class Ship
{
	private:
		string _name;
		int _size;
		coordinates _bow; 
		char _direction;
	public:
		Ship(string name, int size) : _name(name), _size(size) {}
		string getName() { return _name; }
		int size() { return _size; }
		int getRow() { return _bow.row; }
		int getColumn() { return _bow.column; }
		char getDirection() { return _direction; }
		virtual void specialAbility() {}
};

class Battleship : public Ship
{
	public:
		Battleship() : Ship("Battleship", 4) {}
};

class BattleFleet
{
private:
	vector<Ship> _battleFleet;
public:
	BattleFleet(vector<int> shipChoices) : _battleFleet()
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

	void  placeShips(vector<Ship> &);
	vector<Ship> setupShips();
	void generateShips();
	vector<Ship> getPlacedShips() { return _battleFleet; }
};

#endif
