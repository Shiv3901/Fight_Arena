//test file that checks the entire game
#include <iostream>
#include "ground.h"
#include <unistd.h>
#include "ansi.h" 

using namespace std;

int main()
{
	//creating an object of class ground
	ground playground;
 
 	//waiting for 2 seconds
	sleep(2);

	//Game starts
	cout << GOOD << "\n\nGAME STARTS !!\n\n" << OFF;

	//calling the behaviour to ask for rounds
	playground.askForRound();
	
	//calling the behaviour to set player 1
	playground.setPlayer1();
	
	//calling the behaviour to set player 2
	playground.setPlayer2();

	//calling the behaviour to start the game
	playground.startGame();

	//game over
	cout << GOOD << "\n\nENDGAME\n\n" << OFF     ;
	
	return 0;
}