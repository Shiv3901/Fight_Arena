//header file for mechanic class inheriting from player class
#ifndef MECHANIC_H
#define MECHANIC_H
#include "player.h"   //linking the parent class

//inheriting from the parent class player
class mechanic: public player
{
	//behaviour to change the stats with the mechanic characteristics
	void checkStats();

	// Not yet decided
	// void powerUp();
	// void pierceSword();

	//variable to store the magical power of piercing a sword
	// int sword;
};

#endif
