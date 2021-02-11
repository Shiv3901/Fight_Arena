//.cpp file for input class that checks the input everytime
#include <iostream>
#include <limits>
#include <string>
#include "ansi.h"
#include "input.h"

using namespace std;

//constructor
input::input()
{

}

//behaviour that return a valid integer input
int input::roundInput()
{
	//declaring a string to take input as a string
	string required;

	//function that takes an entire including spaces
	getline(cin, required, '\n');

	int length = required.size();

	required[1] = '\0';

	//while loop to check the boundaries of the input entered by the user
	//Rounds must be between 1 to 9 and also must be single lettered
	while( !(required[0] >= 49 && required[0] <= 57 && length == 1) ) {
		
		//if not, then this error message is displayed
		cout << ALERT << "\nError: Invalid number of rounds asked !!" << OFF ;
		cout << INPUT << "\n\nEnter again:" << OFF << " " << ENTER ;

		//user input is taken again
		getline(cin, required);

		length = required.size();

		required[1] = '\0';
	}

	//switching off the colour
	cout << OFF ;

	//return the integer converted message for correct analysing
	return stoi(required);
}

//behaviour that return a valid char value
char input::characterInput()
{
	//declaring a string to take input as a string
	string required;

	//function that takes an entire including spaces
	getline(cin, required, '\n');
	int length = required.size();
	required[1] = '\0';

	//while loop that check the condition and boundaries required
	//input must be either of them: 'a', 'd', 'm', & 'f'
	//Also, it must be a single unit character 
	while( !( ( required[0] == 97 || required[0] == 100 || required[0] == 109
			|| required[0] == 102 ) && length == 1) ){
		
		//if not, then this error message is displayed
		cout << ALERT << "\nError: Invalid input entered!!" << OFF ;
		cout << INPUT << "\n\nEnter again:" << OFF << " " << ENTER ;

		//user input is taken again
		getline(cin, required, '\n');
		length = required.size();

		required[1] = '\0';

	}

	cout << OFF ;

	return required[0];
}

//behaviour that return a valid string value
string input::nameInput()
{
	//declaring a string to take input as a string
	string required;

	//function that takes an entire including spaces
	getline(cin, required,'\n');

	//calculating the length of the string entered
	int length = required.size();
	required[length] = '\0';

	//while loop that check the condition and boundaries required
	//checks if the username is in the range of 3 to 8
	//character length must be between 3 to 8
	//first letter must be an alphabet
	while( (length < 3) || (length > 8) || !( ( required[0] >= 97 && required[0] <= 122 ) 
				|| ( required[0] >=65 && required[0] <= 90 ) ) ) {

		//display the error message
		cout << ALERT << "\nError: Must be between 3 to 8 characters !!\n" << OFF;
		cout << INPUT << "\nEnter valid input:" << OFF;
		cout << " " << ENTER;

		//user input is taken again 
		getline(cin, required,'\n');
		cout << OFF;

		//recalculate the lenght of the required strings
		length = required.size();
		required[length] = '\0';

	} 

	//return the valid string that we got
	return required;
}

//behaviour that return a valid char value
char input::attackInput()
{
	//declaring a string to take input as a string
	string required;

	//function that takes an entire including spaces
	getline(cin, required, '\n');
	int length = required.size();
	// required[2] == 0;

	while(length != 1){
		//display the error message
		cout << ALERT << "\nError: Incorrect input !!\n" << OFF;
		cout << INPUT << "\nEnter again: " << OFF << " " << ENTER;

		//user input is taken again 
		getline(cin,required, '\n');
		length = required.size();
	}



	required[1] = '\0';

	//while loop that check the condition and boundaries required
	//input must be either of them: 'g', 's', 'm', 'S' & 'c'
	while( !( ( required[0] == 103 || required[0] == 115 || required[0] == 109
			|| required[0] == 99 || required[0] == 83 ) )){
		
		//display the error message
		cout << ALERT << "\nError: Incorrect input !!\n" << OFF;
		cout << INPUT << "\nEnter again: " << OFF << " " << ENTER;

		//user input is taken again 
		getline(cin,required, '\n');
		length = required.size();
		// required[2] == 0;

		while(length != 1){
		//display the error message
		cout << ALERT << "\nError: Incorrect input !!\n" << OFF;
		cout << INPUT << "\nEnter again: " << OFF << " " << ENTER;

		//user input is taken again 
		getline(cin,required, '\n');
		length = required.size();
	}
		
		required[1] = '\0';
	}

	cout << OFF ;

	//the first iteration of the required string is passed as a return value
	return required[0];
}

//deconstuctor
input::~input()
{

}
