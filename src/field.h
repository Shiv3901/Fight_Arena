//header file for the field class that manages the rounds
#ifndef FIELD_H
#define FIELD_H
#include "player.h"
#include "passage.h"
#include "clearscreen.h"
#include "input.h"

class field
{
public: 
	//default constructor
	field();

	//behaviour to initialize the two player objects
	void assignPlayers(player* player1, player* player2);
	
	//behaviour to play the round with 2 players
	bool playRound();

	//behaviour to dispay the stats 
	void displayStats(int n);

	//behaviour to display the player stats 
	void display();

	//behaviour tha prints the finsal score of the game
	//and annouces the finalresutl
	void finalResult();

	//deconstructor
	~field();

	//object of class passage is used to check the inputs
	passage filter;

	//objects of player class that clears it out
	player* p1;
	player* p2;

	//2 stats of size 3 that helps using the attacks
	int p1_stats[3];
	int p2_stats[3];

	//array of size 2 that keeps tracks on where are gonna be getting out the 
	int leaderboard[2];

	//variable to store the number of xero
	int rounds;

	//vvariable to store the count (int datatype) 
	int count;

	//object pf classroom created a clearscreen 
	clearscreen screen;

	//object of input class provided a lot of intel
	input entered;
};

#endif
