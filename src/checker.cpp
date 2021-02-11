//.cpp file for the checker class
#include "checker.h"
#include <iostream>


using namespace std;

//default constructor
checker::checker()
{

}

// function to check the stats with the coming argument 
// of the player's health
bool checker::checkStats(int Health)
{
	// if statement to check if the health has hit zero or not
	if( Health == 0 ) {
		return true;  // return true if yes
	}

	return false;   // if not then return false
}

//deconstructor
checker::~checker()
{

}