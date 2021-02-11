//header file for the security class of the game
#ifndef SECURITY_H
#define SECURITY_H

class security
{
public: 
	//default constructor
	security();
	
	//behaviour to set the stats of the shooter
	//to prevent passing the arguments every time
	void setStats(int* shooter);

	//behaviour to check if the player can pierce sword
	bool checkSword();

	//behaviour to check if the player can skip a move
	bool checkSkip();

	//behaviour to check if the player can use medicine
	bool checkMedic();

	//behaviour to check if the player can fire a canonball
	bool checkCanonball();

	//deconstructor
	~security();

	//variable that stores the shot fired
	int* shoot;
};

#endif
