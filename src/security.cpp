#include "security.h"
#include <iostream>
#include "ansi.h"

using namespace std;

//default constructor
security::security()
{
	//dynamic allocation of memory to store the 
	//stats of the shooter
	shoot = new int[3];
}

//behaviour to set the stats of the shooter
//to prevent passing the arguments every time
void security::setStats(int* shooter)
{
	//for loop to copy the elements locally
	for(int i = 0 ; i < 3 ; i++) {
		shoot[i] = shooter[i];
	}
}

//behaviour to check if the player can pierce sword
bool security::checkSword()
{
	//return true if and only if the mana of player is greater than 10
	if(shoot[2] >= 10) {
		return true;
	}

	//if not, then display the error message and return false
	cout << STATS << "\nYou need at least 10 Mana to pierce Sword\n" << OFF;

	return false;
}

//behaviour to check if the player can skip a move
bool security::checkSkip()
{
	//checks if the health is greater than 20, and safe to Skip move
	if(shoot[0] >= 20) {
		return true;
	}

	//if not, then display the error message and return false
	cout << STATS << "\nYou need your healt greater than 20 units\n" << OFF;

	return false;
}

//behaviour to check if the player can use medicine
bool security::checkMedic()
{
	//checking if either the health or th earmour is low
	if(shoot[0] <= 20 || shoot[1] <= 20) {
		return true;
	}

	//if not, then display the error message and return false
	cout << STATS << "\nYou do not need health at the moment\n" << OFF;

	return false;
}

//behaviour to check if the player can fire a canonball
bool security::checkCanonball()
{
	//checking if the mana is exactly 100 to fire a canonball
	if(shoot[2] >= 100) {
		return true;
	}

	//if not, then display the error message and return false
	cout << STATS << "\nYou need exactly 100 Mana \n" << OFF ;

	return false;
}

//deconstructor
security::~security()
{
	delete shoot;
}