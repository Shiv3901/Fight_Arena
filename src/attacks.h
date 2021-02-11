//header file of attacks class that initiates every fires
#ifndef ATTACKS_H
#define ATTACKS_H

class attacks
{
public:
	//default constructor
	attacks();
	
	//behaviour that updates stats for firing a gunshot 
	void gunshot(int* shooter, int* receiver);
	
	//behaviour that updates stats for piercing a sword
	void sword(int* shooter, int* receiver);
	
	//behaviour that updates stats for skipping the turn
	void Skip(int* shooter, int* receiver);
	
	//behaviour to update stats for taking medication
	void medical(int* shooter, int* receiver);

	//behaviour to update stats for firing a canonball
	void canonball(int* shooter, int* receiver);

	//deconstructor
	~attacks();
};

#endif
