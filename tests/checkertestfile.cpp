#include <iostream>
#include "../checker.h"

using namespace std;

int main()
{
	checker check ;

	int health ;

	for(int i = 0 ; i < 50 ; i++) {
		cout << "\nCase " << i+1 << ": \n" ;

		cin >> health ;

		int output = check.checkStats(health) ;

		cout << "checkStats: " << output << endl ; 
	}
	return 0;
}