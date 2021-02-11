#include <iostream>
#include "../src/ground.h"

using namespace std;

int main()
{
	ground play ;

	play.askForRound();

	play.setPlayer1();

	play.setPlayer2();

	play.startGame();

	return 0;
}
