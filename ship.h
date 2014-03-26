#ifndef SHIP_H
#define SHIP_H

#include <string>
using std::string;
#include <vector>
using std::vector;

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

class BattleFleet
{
private:
	vector<Ship> _BattleFleet;
public:
	void  placeShips(vector<Ship> &);
	vector<Ship> setupShips();
	void generateShips();
};

#endif
