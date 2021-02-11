//.cpp file for medic class inheriting from player class
#include "player.h"
#include "medic.h"

//behaviour to change the stats with medic characteristics
void medic::checkStats()
{

	stats[0] *= 1.05; //health gets increased by 5%

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
