#include <iostream>
#include "../src/attacks.h" 

using namespace std;

int main()
{

	attacks attack;

	int* arr = new int[3] ;
	int* arr1 = new int[3] ; 
	int i, j ;

	for(i = 0 ; i < 10 ; i++)
	{
		cout << "CASE " << i+1 << ": \n\n" ;

		cout << "Enter: \n" ; 

		for(j = 0 ; j < 3 ; j++)
			cin >> arr[j] ;
 
		for(j = 0 ; j < 3; j++)
			cin >> arr1[j] ;
 
		int n = i;

		switch( i % 5 ) {
			case 1:
			cout << "\nGunshot\n\n";
				attack.gunshot(arr, arr1) ;
				break;
			case 2:
				cout << "\nSword\n\n";
				attack.sword(arr, arr1);
				break;
			case 3:
				cout << "\nSkip\n\n" ;
				attack.Skip(arr, arr1);
				break;
			case 4:
				cout << "\nMedical\n\n";
				attack.medical(arr, arr1);
				break;
			case 5:
				cout << "\nCanonball\n\n";
				attack.canonball(arr, arr1);
				break;
		}

		cout << "Player 1: " ;
		for(j = 0 ; j < 3 ; j++)
			cout << arr[j] << " " ;

		cout << "\nPlayer 2: ";
		for(j = 0 ; j < 3; j++)
			cout << arr1[j] << " " ;

		cout << endl << endl ;
	}

	delete[] arr;
	delete[] arr1;
}
