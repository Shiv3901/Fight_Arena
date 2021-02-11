#include "passage.h"

// linking the class that will initiate the changes 
// in the players' stats
#include "attacks.h"

//class that checks of the attacker's stats meets the 
// criteria for engaging the shot
#include "security.h"

// default constructor
passage::passage()
{

}

// behaviour to play the shot with the passed arguments
bool passage::playShot(int* shooter, int* receiver, char shot)
{
	// accessing the function that sets up the shooter stats 
	// everytime it is called
	guard.setStats(shooter);

	// if statement to play the shot
	if(shot == 'g') {

		// playing the gunshot by passing the argument to attacks
		attacker.gunshot(shooter, receiver);

		return true;
	
	} 
	// statement to check if key is 's' and check whether the attacker 
	// meets the requirement to pierce a sword
	else if(shot == 's' && guard.checkSword()) {

		// pass the arguments to pierce a sword
		attacker.sword(shooter, receiver);

		return true;

	}
	// statement to check if key is 'S' and check whether the attacker
	// meets the requirement to Skip the turn
	else if(shot == 'S' && guard.checkSkip()) {

		// pass the arguments to Skip the move
		attacker.Skip(shooter, receiver);

		return true;

	}
	// statement to check if key is 'm' and check whether the attackers 
	// meets the requirement to use medical items
	else if(shot == 'm' && guard.checkMedic()) {

		// pass the arguments to use the medic for the attacker
		attacker.medical(shooter, receiver);

		return true;

	} 
	// statement to check if key is 'c' and check whether the attacker
	// meets the requirement to fire a canonball
	else if(shot == 'c' && guard.checkCanonball()) {

		attacker.canonball(shooter, receiver);

		return true;

	} 

	// if none of the if statements works
	// this behaviour returns false
	// suggesting that the input is invalid
	return false;
}

// deconstructor
passage::~passage()
{

}