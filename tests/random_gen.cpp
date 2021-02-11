#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

#define HIGH 100
#define LOW 0
#define COLUMNS 3
#define LINES 20

using namespace std ; 

int main()
{
	srand (time(NULL)) ;

	int random ;

	for(int i = 0 ; i < LINES ; i++) {

		for(int j = 0 ; j < COLUMNS ; j++) {

			random = LOW + (rand() % HIGH) ;
			cout << random << " " ;

		}

		cout << endl ;

	}

	return 0;
}