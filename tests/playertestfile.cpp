#include <iostream>
#include "../player.h"
#include "../archer.h"
#include "../defender.h"
#include "../mechanic.h"
#include "../medic.h"
#include <iostream>
#include <string> 

using namespace std;

player* assignplayer(char select)
{
	while(1){
		if(select == 'a' || select == 'd')
			break;

		if(select == 'm' || select == 'f')
			break;

		cout << "\nIncorrect Input\n";
		cout << "Enter Again: ";
		cin >> select ;
	}

	player* made;

	switch(select){
		case 'a':
			made = new archer;
			break;
		case 'd':
			made = new defender;
			break;
		case 'm':
			made = new mechanic;
			break;
		case 'f':
			made = new medic;
			break;
	}

	return made;
}

using namespace std;

int main()
{
	int* array = new int[3];

	for(int i = 0 ; i < 10 ; i++){
		char select;

		cout << "\nCase " << i+1 << ": \n\n";

		cout << "Please select a player type from the following !!\n\n";
		cout << "1. Archer:   'a' \n";
		cout << "2. Defender: 'd' \n";
		cout << "3. Mechanic: 'm' \n";
		cout << "4. Medic:    'f' \n";

		cout << "\nEnter the keyword: ";
		cin >> select;
		player* play = assignplayer(select);

		string name;

		cout << "Enter a player name: ";
		cin >> name;
		
		play->setName(name);

		cout << "Enter Stats: ";
		for(int u = 0 ; u < 3 ; u++)
			cin >> array[u];

		play->updateStats(array);
		play->checkStats();

		cout << "\n\nPlayer Name: " << play->getName() << endl;
		cout << endl;

		cout << "Player stats: ";
		play->printStats();
 
		delete play;
	} 

	delete array;
	return 0;
}