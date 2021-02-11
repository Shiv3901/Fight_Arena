//header file for the checker class that checks the stats
#ifndef CHECKER_H
#define CHECKER_H
//how are you
// checker class has been created to check if anytime during
// the rounds, any of the 2 players' health hit zero
class checker
{
public: 
	// default constructor
	checker();

	// function to check the stats with the coming argument 
	// of the player's health
	bool checkStats(int Health);
	
	// deconstructor
	~checker();
	
};

#endif
