#include <iostream>
#include "../passage.h" 

using namespace std;

void display(int array[]){
	for(int i = 0 ; i < 3 ; i++)
		cout << array[i] << " ";

	cout << endl;
}

int main()
{
	passage filter ;

	int* arr = new int[3];
	int* arr1 = new int[3];

	int final[3];
	int final1[3];
	char shot;

	for(int  i = 0 ; i < 10 ; i++){

		cout << "\n\nCase " << i+1 << ": \n\n";

		cout << "\nInput : \n";

		cout << "Attacker: " ;
		for(int h = 0 ; h < 3 ; h++){
			cin >> arr[h] ;
		}
		display(arr);
			
		cout << "Receiver: " ;
		for (int j = 0; j < 3; j++){
			cin >> arr1[j] ;
		}
		display(arr1);
			

		cin >> shot ;


		cout << "\nExpected Output : \n";

		cout << "Attacker: " ;
		for(int h = 0 ; h < 3 ; h++){
			cin >> final[h] ;
		}
		display(final);
			
		cout << "Receiver: " ;
		for (int j = 0; j < 3; j++){
			cin >> final1[j] ;
		}
		display(final1);


		filter.playShot(arr, arr1, shot);

		cout << "\nOutput: " << endl;

		cout << "Attacker: " ;
		display(arr);
			
		cout << "Receiver: " ;
		display(arr1);

		

	}

	delete arr;
	delete arr1;
	return 0;
}