#ifndef PASSAGE_H
#define PASSAGE_H

// linking the class that will initiate the changes 
// in the players' stats
#include "attacks.h"    

//class that checks of the attacker's stats meets the 
// criteria for engaging the shot
#include "security.h"

//class that creates a passage to engage the shot
class passage
{
public:
	// default constructor
	passage();

	// behaviour to play the shot with the passed arguments
	bool playShot(int* shooter, int* receiver, char shot);
	
	// deconstructor
	~passage();

	// object that initiates the attacks
	attacks attacker;

	// object of the type security 
	security guard;
};

#endif
