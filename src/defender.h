//header file for defender class inheriting from player class
#ifndef DEFENDER_H
#define DEFENDER_H
#include "player.h"   //linking the parent class

//inheriting from the parent class player
class defender: public player
{
	//behaviour to change the stats with the defender characteristics
	void checkStats();

	// Not yet decided                  
	// void powerUp();
	// void defendCanonball();

	//variable to store the magical power of having a shield
	// int shield;
};

#endif
