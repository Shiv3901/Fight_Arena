#ifndef GROUND_H
#define GROUND_H
#include "player.h"
#include "archer.h"
#include "medic.h"
#include "mechanic.h"
#include "defender.h"
#include "attacks.h"
#include "passage.h"
#include "field.h" 
#include "clearscreen.h"
#include "input.h"

class ground
{
public:
	ground();
	void askForRound();
	void setPlayer1();
	void setPlayer2();
	char printCharacter(int n);
	void startGame();
	~ground();

	clearscreen screen;
	field play;
	player* player1;
	player* player2;
	int rounds;
	input entered;
};

#endif
