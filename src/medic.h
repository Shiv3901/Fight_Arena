//header file for medic class inheriting from player class
#ifndef MEDIC_H
#define MEDIC_H
#include "player.h"    //linking to the parent class

//inheriting from the parent class player
class medic: public player
{
	//behaviour to change the stats with medic characteristics
	void checkStats();

	// Not yet decided 
	// void powerUp();
	// void heal();

	// variable to store the magigal healing power
	// int bandage;
};

#endif
