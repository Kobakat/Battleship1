#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <iostream>

//This could be refactored to place all 5 ships at once, or it could just be called 5 times in whatever needs it (in this case: main)
int PlaceShip(int * shipLocations)
{
	bool isContained = true;
	int random = 0;
	
	

	while (isContained) 
	{
		random = rand() % 100;

		for (int i = 0; i < sizeof(shipLocations); i++)
		{
			if (random != shipLocations[i]) 
			{
				isContained = false;
			}
		}
	}
	
	return random;
}

//Each of the 100 grid spaces in a 10x10 grid is represented as an object with a numerical location (1-100) and a bool defining whether a ship in the space
class GridSpace
{
	public:

	int location;
	bool hasShip;

	GridSpace()
	{
		this->location = 0;
		this->hasShip = false;
	}
	
};


int main() 
{
	//Seeding rand
	srand(time(0));

	//The 10x10 grid is an array of 100 GridSpace objects
	GridSpace grid[100];

	for (int i = 0; i < 100; i++) 
	{
		grid[i].location = i;
		grid[i].hasShip = false;
	}
	int shipLocations[5] = { 0,0,0,0,0 };

	//Placing 5 ships in random spots
	for (int i = 0; i < 5; i++) 
	{
		int spot = PlaceShip(shipLocations);
		shipLocations[i] = spot;
		grid[shipLocations[i]].hasShip = true;
	}

	//Sample console output available to demonstrate functionality

	/*
	std::cout << "Ships are located at...\n";

	for (int i = 0; i < 5; i++) 
	{
		std::cout << shipLocations[i];
		std::cout << "\n";
	}
	
	std::cout << "\nInfo about grid spaces with ships \n";

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Index: " << grid[shipLocations[i]].location;
		std::cout << "\n";
		std::cout << "Has Ship: " << grid[shipLocations[i]].hasShip;
		std::cout << "\n";

	} */

	return 0;
}