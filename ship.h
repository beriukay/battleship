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
		void setRow(int newRow) { _bow.row = newRow; }
		void setColumn(int newColumn) { _bow.column = newColumn; }
		void setDirection(char dir) { _direction = dir; }
		virtual void specialAbility() {}
};

class Battleship : public Ship
{
	public:
		Battleship() : Ship("Battleship", 4) {}
};

class Carrier : public Ship
{
	public:
		Carrier() : Ship("Carrier", 5) {}
};

class Destroyer : public Ship
{
	public:
		Destroyer() : Ship("Destroyer", 3) {}
};

class PTBoat : public Ship
{
	public:
		PTBoat() : Ship("PTBoat", 2) {}
};

class Submarine : public Ship
{
	public:
		Submarine() : Ship("Submarine", 3) {}
};


class BattleFleet
{
private:
	vector<Ship> _battleFleet;
public:
	BattleFleet(vector<int>);

	void  setFleet(vector<Ship> &);
	vector<Ship> getFleet() { return _battleFleet; }
};

#endif
