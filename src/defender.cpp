//.cpp file for defender class inheriting from player class
#include "player.h"
#include "defender.h"

//behaviour to change the stats with the defender characteristics
void defender::checkStats()
{
	stats[1] *= 1.10; //defends pretty well as armour gets increased by 10%

	//for loop to check if the stats are in the range of 0 to 100
	//if not, then changing it to the accepted format
	for(int i = 0 ; i < 3 ; i++) {

		if(stats[i] < 0) {
			
			stats[i] = 0;
		
		} else if(stats[i] > 100) {

			stats[i] = 100;

		}
	
	}

}
