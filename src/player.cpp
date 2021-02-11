#include "player.h"
#include <iostream>
#include <string>
#include "ansi.h"       

using namespace std;

//default constructor
player::player()
{
	//initialising every variable that the class has
	name = "null";
	//At the start of the game health & armour is 100
	stats[0] = stats[1] = 100;
	//while mana is 0
	stats[2] = 0;

	//prototype
	magicCount = 0 ; 
}

//constructor with initialising the player name 
player::player(string pname)
{
	//initialsing the variables 
	name = pname; 
	stats[0] = stats[1] = 100;
	stats[2] = 0;
}

//change the player's name
void player::setName(string player_name)
{
	name = player_name;
}

// get the player name
string player::getName()
{
	return name;
}

//get player health
int player::getHealth()
{
	return stats[0];
}

//behaviour to update the stats after each shot has been played
void player::updateStats(int player_stats[])
{
	//for loop to update the stored stats with the updated 
	//player_stats passed
	for(int i = 0 ; i < 3 ; i++) {
		stats[i] = player_stats[i];
	}
}

//print the stats of the player
void player::printStats()
{
	//for loop to print the stats (space seperated) 
	for(int i = 0 ; i < 3 ; i++) {
		cout << stats[i] << " ";
	}

	cout << endl;
}

//deconstructor
player::~player()
{
	//delete[] stats;
}