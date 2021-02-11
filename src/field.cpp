//.cpp file of the field class 
#include <iostream>
#include "field.h"
#include "player.h"
#include "checker.h"     
#include "attacks.h"
#include "passage.h"
#include "clearscreen.h"    
#include "ansi.h" 
#include "input.h"

using namespace std;

//default constructor
field::field()
{
	//initialising every other variables possible, and making it equal to 
	//what it was desired for
	leaderboard[0] = leaderboard[1] = 0;
	p1_stats[0] = p1_stats[1] = p2_stats[0] = p2_stats[1] = 100;
	p1_stats[2] = p2_stats[2] = 0;
	count = 0;
}

//behaviour to initialize the two player objects
void field::assignPlayers(player* player1, player* player2)
{
	//initialise both players 
	p1 = player1;
	p2 = player2;
}

//behaviour to play the round with 2 players
bool field::playRound()
{
	//behaviour to initialize the two player objects
	checker check;

	p1_stats[0] = p1_stats[1] = p2_stats[0] = p2_stats[1] = 100;
	p1_stats[2] = p2_stats[2] = 0;
	p1->updateStats(p1_stats);
	p2->updateStats(p2_stats);

	char shot;   

	rounds = leaderboard[0] + leaderboard[1];

	cout << PRINT << "\n\nRound " << rounds + 1 << " Starts....\n\n" ; 
	cout << OFF;

	field::displayStats(1);

	while( 1 )
	{
		//player 1 chance
		cout << PINK << "Your turn " << p1->getName() << ":";
		cout << OFF << PRINT << " ";		
		shot = entered.attackInput();

		while(1) {

			if(filter.playShot(p1_stats, p2_stats, shot)) {
				break;
			}

			cout << ALERT << "\nIncorrect Input !!\n" << OFF;
			cout << PINK << "Try again:" << OFF << " "<< ENTER ;
			shot = entered.attackInput();
			cout << OFF;
		}
		
		screen.clearScreen();

		field::displayStats(2);

		if(p2_stats[2] >= 100){
			cout << ENTER << "Canonball available !!\n\n" << OFF;
		}

		if( check.checkStats( p2->getHealth() ) ) {
			cout << "Player 1 won the round !!" << endl;
			leaderboard[0]++;
			break;
		}

		//player 2 chance
		cout << PINK << "Your turn " << p2->getName() << ":" 
		<< OFF << ENTER << " ";		
		shot = entered.attackInput();

		while(1) {

			if(filter.playShot(p2_stats, p1_stats, shot)) {
				break;
			}  

			cout << ALERT << "\nIncorrect Input !!\n" << OFF;
			cout << PINK << "Try again:" << OFF << " "<< ENTER ;
			shot = entered.attackInput();
			cout << OFF;
		}

		screen.clearScreen();

		field::displayStats(2); 

		if(p1_stats[2] >= 100){
			cout << PRINT << "Canonball available !!\n\n" << OFF;
		}

		if( check.checkStats( p1->getHealth() ) ) {
			cout << "Player 2 won the round !!" << endl;
			leaderboard[1]++;
			break;
		}

	}

	cout << STATS << "Round " << rounds << " ended !!" << OFF ;
 
	return true;
}

//behaviour to dispay the stats 
void field::displayStats(int n)
{
	//if statement, to change the colour afetr each time you reload the webpage
	if(count % 2 == 1)
		cout << PRINT;
	else
		cout << ENTER ;

	//display the current attacks available
	cout << endl << GUN << SWORD << MEDICAL 
	<< SKIP << CANON << endl << OFF ;

	
	if(n == 2) {
		p1->updateStats(p1_stats);
		p2->updateStats(p2_stats);
		p1->checkStats();
		p2->checkStats();
	}

	cout << "\n" ;

	cout << STATS << "\n" << p1->getName() << ":" << OFF 
	<< " " << NAME ;

	p1->printStats();
	cout << OFF;
	
	cout << STATS << "\n" << p2->getName() << ":" << OFF 
	<< " " << NAME;

	p2->printStats();
	cout << OFF << endl;

	count++ ;
}

//behaviour to display the player stats 
void field::display()
{
	cout << "\n\n";

	//displaying details about player1
	cout << PINK << p1->getName() << ": " << leaderboard[0] 
	<< " wins..\n\n" << OFF;

	//displaying details about player2
	cout << PRINT << p2->getName() << ": " << leaderboard[1] 
	<< " wins..\n\n" << OFF;
}

//behaviour tha prints the finsal score of the game
//and annouces the finalresutl
void field::finalResult()
{
	cout << "\n\n" ;

	//if statemnt to print whst is required in reality

	if(leaderboard[0] == leaderboard[1])
	{
		
		cout << PRINT << "PLayer " << p1->getName() 
		<< " & Player " << p2->getName() << endl << OFF;

		cout << PINK << "It's a tie !!\n\n" ;
		cout << "Better Luck next time !!\n\n" << OFF;
	
	} else if(leaderboard[0] > leaderboard[1]) {
		
		cout << STATS << "Player " << p1->getName() << " Won !!\n\n" << OFF;
	
	} else {
		
		cout << STATS << "Player " << p2->getName() << " Won !!\n\n" <<  OFF;
	
	}
}

field::~field()
{
	// delete p1;
	// delete p2;
}
