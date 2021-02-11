//.cpp file for mechanic class inheriting from player class
#include "player.h"
#include "mechanic.h"

//behaviour to change the stats with the mechanic characteristics
void mechanic::checkStats()
{
	stats[0] *= 0.95;  //health gets reduced by 5%
	stats[1] *= 1.02;  //armour gets increased by 2%
	stats[2] *= 0.98;  //mana gets reduced by 2%

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
