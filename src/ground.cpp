#include "player.h"
#include "archer.h"
#include "medic.h"
#include "mechanic.h"    
#include "defender.h"
#include "attacks.h"
#include "passage.h"
#include "field.h"
#include "ground.h"
#include "clearscreen.h"
#include "ansi.h"
#include <string>
#include <iostream> 
#include <unistd.h>
#include <limits>
#include <string>
#include "input.h"

using namespace std;

ground::ground()
{
	rounds = 0;
}

void ground::askForRound()
{
	cout << INPUT << "How many rounds would you both like to play? (1 to 9):" << OFF;
	cout << " " << ENTER ;

	rounds = entered.roundInput();

	screen.clearScreen();
}

char ground::printCharacter(int n)
{
	cout << PINK << "Setting player " << n << " !!\n" << OFF;
	cout << PRINT << "\nYou have the following options: \n\n";
	cout << "1. Archer:   'a'\n";
	cout << "2. Defender: 'd'\n";
	cout << "3. Mechanic: 'm'\n";
	cout << "4. Medic:    'f'\n" << OFF; 

	cout << INPUT << "\nEnter the keyword:" << OFF << " " << ENTER ;
	
	return entered.characterInput();
}

void ground::setPlayer1()
{
	char opted = ground::printCharacter(1);

	switch(opted) {
		case 'a':
			player1 = new archer;
			break;
		case 'd':
			player1 = new defender;
			break;
		case 'm':
			player1 = new mechanic;
			break;
		case 'f':
			player1 = new medic;
			break;
	}

	cout << OFF ;

	cout << INPUT << "\nEnter your Username (3 to 8 characters):" << OFF << " " << ENTER ;
	player1->setName(entered.nameInput());
	cout << OFF ;

	screen.clearScreen();
}


void ground::setPlayer2()
{
	char opted = ground::printCharacter(2);

	switch(opted) {
		case 'a':
			player2 = new archer;
			break;
		case 'd':
			player2 = new defender;
			break;
		case 'm':
			player2 = new mechanic;
			break;
		case 'f':
			player2 = new medic;
			break;
	}  

	cout << OFF ;

	cout << INPUT << "\nEnter your Username (3 to 8 characters):" << OFF << " " << ENTER ;
	player2->setName(entered.nameInput());
	cout << OFF ;

	screen.clearScreen();
}

void ground::startGame()
{
	play.assignPlayers(player1, player2);

	for(int i = 0 ; i < rounds ; i++) {
		screen.clearScreen();
		play.playRound();
		screen.clearScreen();
		play.display();
		if(i != rounds - 1)
		{
			cout << GOOD << "\n\nWait for 2 seconds, current stats are displayed !!\n\n" << OFF ;
		}
		sleep(2);
	}

	play.finalResult();
}

ground::~ground()
{
//	delete player1;
//	delete player2;
}
