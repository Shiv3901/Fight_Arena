#include <iostream>
#include "../src/player.h"
#include "../src/field.h"
#include "../src/mechanic.h"
#include "../src/defender.h"  

using namespace std;

int main()
{
	player* p1 = new mechanic ;
	player* p2 = new defender ;

	p1->setName("Sample 1");
	p2->setName("Sample 2");

	field playground;

	playground.assignPlayers(p1, p2) ;

	cout << "\nTesting the field.cpp file !!\n" ;

	cout << "\n.playRound() behaviour !!\n" ;

	int output = playground.playRound();

	cout << "\n\nReturned Value: " << output << endl << endl ;

	cout << "\n\n.displayStats(1) behaviour\n" ;

	playground.displayStats(1) ;

	cout << "\n\n.displayStats(2) behaviour\n" ;

	playground.displayStats(2) ;

	cout << "\n\n.finalResult() behaviour\n" ;

	playground.finalResult();

	cout << "\nEnd of the testing file\n" ;	

	return 0;
}
