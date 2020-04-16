#ifndef GRID_H
#define GRID_H

//Each of the 100 grid spaces in a 10x10 grid is represented as an object with a numerical location (0-99) and a bool defining whether a ship in the space
class GridSpace
{
public:

	int location;
	bool hasShip;

	GridSpace();
	~GridSpace();
};

#endif