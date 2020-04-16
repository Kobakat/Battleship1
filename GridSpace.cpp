#include "GridSpace.hpp"
#include <iostream>

GridSpace::GridSpace()
{
	this->location = 0;
	this->hasShip = false;
}

GridSpace::~GridSpace() 
{
	this->location = 0;
	this->hasShip = false;
}
