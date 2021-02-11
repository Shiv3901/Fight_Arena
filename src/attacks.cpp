#include "attacks.h"
#include <iostream>

using namespace std;

attacks::attacks()
{
	
}

//behaviour that updates stats for firing a gunshot 
void attacks::gunshot(int* shooter, int* receiver)
{
	receiver[0] -= 15; //health decrease by 15 points
	receiver[1] -= 5;  //armour reduced by 5 points

	shooter[2] += 20; //xp increased by 20 points 
}

//behaviour that updates stats for piercing a sword
void attacks::sword(int* shooter, int* receiver)
{
	receiver[0] -= 30; //health decrease by 30 points
	receiver[1] -= 10;  //armour reduced by 10 points

	shooter[2] -= 10; //xp decreased by 10 points 

}

//behaviour that updates stats for skipping the turn
void attacks::Skip(int* shooter, int* receiver)
{
	shooter[2] += 25; //xp increased by 25 points
}

	
	
//behaviour to update stats for taking medication
void attacks::medical(int* shooter, int* receiver)
{
	shooter[0] += 15; //health increased by 15 points
	shooter[1] -= 5 ; //armour reduced by 5
	shooter[2] -= 5; //mana reduced by 5
}

//behaviour to update stats for firing a canonball
void attacks::canonball(int* shooter, int* receiver)
{
	receiver[0] -= 40; //health decrease by 40 points
	receiver[1] -= 30;  //armour reduced by 30 points

	shooter[2] = 0; //xp drops to zero

}

attacks::~attacks()
{

}