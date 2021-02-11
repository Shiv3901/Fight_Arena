//header file for archer class inheriting from player class
#ifndef ARCHER_H
#define ARCHER_H
#include "player.h"  //linking the parent class

//inheriting from the parent class player
class archer: public player
{
public:
	archer() ;
	//behaviour to change the stats with the archer characteristics
	void checkStats();

	//behaviour to update the stats and print relevant information
	void powerUp();
	// void shotArrow();

	//variable to store the magical power of having an arrow
	int arrow ;  
	int random ;
};

#endif


/*

	Just got an idea, why not randomly throw a power up to a player
	depending on what player type it selected

	So, if I am an archer, I can have one of the four different 
	powerups during the game

*/