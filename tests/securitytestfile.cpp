#include <iostream>
#include "../security.h"

using namespace std ;  

int main() 
{
	security guard ;
  
	int* arr = new int[3];

	for(int i = 0 ; i < 20 ; i++) {
		cout << "\n\nCase " << i+1 << ": \n" ;

		for(int j = 0 ; j < 3 ; j++)
			cin >> arr[j] ;

		guard.setStats(arr) ;

		cout << "checkSword: " << guard.checkSword() << endl ;
		cout << "checkSkip: " << guard.checkSkip() << endl ;
		cout << "checkMedic: " << guard.checkMedic() << endl ;
		cout << "checkCanonball: " << guard.checkCanonball() << endl ;
		
		cout << endl << endl ;
	}

	delete arr;
	
	return 0;
}