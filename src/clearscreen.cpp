//.cpp file that clears the screen 
#include "clearscreen.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

//default constructor
clearscreen::clearscreen()
{

}

// function to clear the terminal screen
void clearscreen::clearScreen()
{
	//string that clears the terminal screen entirely
	cout << "\033[2J\033[1;1H";
}

//deconstructor
clearscreen::~clearscreen()
{

}