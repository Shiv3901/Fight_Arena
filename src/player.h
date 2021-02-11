#ifndef PLAYER_H
#define PLAYER_H
#include <string>

//class player has the player's name and its stats
//class player is also an abstract class
class player
{
public:
	//default constructor
	player();

	//constructor with initialising the player name 
	player(std::string pname);

	//change the player's name
	void setName(std::string player_name);  

	//get the player name
	std::string getName();    

	//purely abstract behaviours           
	virtual void checkStats() = 0;		     
	// virtual void powerUp() = 0; 

	//get player health             
	int getHealth();   

	//behaviour to update the stats after each shot has been played
	void updateStats(int player_stats[]);

	//print the stats of the player
	void printStats();

	//deconstructor
	~player();

	std::string name;      //stores the player name
	
	//stats[0] is Health of the player
	//stats[1] is Armour of the player
	//stats[2] is Mana of the player
	int stats[3];   

	int magicCount ;
};

#endif
