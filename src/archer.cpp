//.cpp file for archer class inheriting from player class
#include "archer.h"
#include "player.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include "ansi.h"

using namespace std ; 

archer::archer()
{
	//initialising the variables to zero
	arrow = random = magicCount = 0 ;
}

//behaviour to change the stats with the archer characteristics
void archer::checkStats()
{
	stats[2] *= 1.05; //mana gets increased by 5%

	//generate a random number
	srand (time(NULL)) ;

	//in the range of 1 to 4
	random = 1 + (rand() % 4) ;

	//random turn generater checker to make the powerup more random
	if( (magicCount % 6) == 0 && magicCount != 0 ) {

		//if yes, then call a inside behaviour from these behaviou
		//it provided with what magic power is gained
		archer::powerUp() ;

	}


	//for loop to check if the stats are in the range of 0 to 100
	//if not, then changing it to the accepted format
	for(int i = 0 ; i < 3 ; i++) {

		if(stats[i] < 0) {
			
			stats[i] = 0;
		
		} else if(stats[i] > 100) {

			stats[i] = 100;

		}
	
	}

	//to keep the count on how many times magic count has been called
	magicCount++;

}

//behaviour to update the stats and print relevant information
void archer::powerUp()
{

	cout << PINK << endl << name << " gained some power !!\n\n" ;

	//switch statement to give the power effectively
	switch(random) {
		case 1:
			cout << "Before : " << stats[0] ;
			stats[0] += 5 ;
			cout << "  After : " << stats[0] << endl << endl ;
			cout << "Health increased by 5 units !!\n";
			break;
		case 2:
			cout << "Before : " << stats[1] ;
			stats[1] += 10 ;
			cout << "  After: " << stats[1] << endl << endl ;
			cout << "Armour increased by 10 units !!\n"; 
			break;
		case 3:
			cout << "Before : " << stats[2] ;
			stats[2] -= 4 ;
			cout << "  After: " << stats[2] << endl << endl ;
			cout << "You got unlucky, as 3 is unlucky !!\n\n" ;
			cout << "Mana decreased by 4 units \n\n" ; 
			break;
		case 4:
			cout << "Before : " << stats[0] << " " << stats[1] ;
			stats[0] += 10 ;
			stats[1] += 5 ;
			cout << "  After: " << stats[0] << " " << stats[1] << endl << endl ;
			cout << "You have got more luck !!\n\n";
			cout << "Health increased by 10 units !!\n" ;
			cout << "Armour increased by 5 units !!\n" ;
			break;
	} 

	cout << OFF ;

}