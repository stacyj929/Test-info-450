// 450Assignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std; 


int main()
{
	// This section declares the variables that will be used.
	int amount;
	char anotherTransaction;
	int fifties, twenties, tens, fives, ones; 


	//Main loop is a do while which will allow users to enter other transactions after their initial request. 
	do { 
				
		cout << "Please enter withdrawal amount --> ";
		cin >> amount;

		// This do while loop validates the number that is entered by the user checking to see if its between 1 and 300
		// Also loops back around so users can enter more transactions. 
		do {

			if (amount > 300)
				cout << "Sorry the max amount you can withdraw is $300" << endl; break; 

			if (amount < 1)
				cout << "Sorry the min amount you can withdraw is $1" << endl; break; 

			cout << "\nWould you like to make another transaction? (Y/N)" << endl;
			cin >> anotherTransaction;

		} while (anotherTransaction == 'Y' || anotherTransaction == 'y');


		// This section calculates the number of bills that will be dispensed.
		
		fifties =   amount / 50; 
		twenties =	amount % 50 / 20;
		tens =	amount % 20 / 10;
		fives =	amount % 10 / 5;
		ones = amount % 5 / 1;

		// This section displays how many of each bill denomination you get and only shows up if greater than zero. 

		if (fifties > 0)
			cout << "You have " << fifties << " $50 bills." << endl;
		if (twenties > 0)
			cout << "You have " << twenties << " $20 bills." << endl; 
		if (tens > 0)
			cout << "You have " << tens << " $10 bills." << endl;
		if (fives > 0)
			cout << "You have " << fives << " $5 bills." << endl; 
		if (ones > 0)
			cout << "You have " << ones << " $1 bills." << endl; 
			

			
			cout << "\nWould you like to make another transaction? (Y/N)" << endl;
			cin >> anotherTransaction;

		} while (anotherTransaction == 'Y' || anotherTransaction == 'y');

	
		
	system("Pause");
	  return 0;
}

