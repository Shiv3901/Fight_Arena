//header file for input class that checks the input everytime
#ifndef INPUT_H
#define INPUT_H
#include <iostream>
#include <string>

using namespace std;

class input
{
public:
	//constructor
	input();

	//behaviour that return a valid integer input
	int roundInput();

	//behaviour that return a valid char value
	char characterInput();

	//behaviour that return a valid string value
	string nameInput();

	//behaviour that return a valid char value
	char attackInput();
	~input();
};

#endif
