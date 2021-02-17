/*Enigma Swan Adams
* CS 201 homework #3
date 2/16/21
main program which 
promts user and prints 
collatz series starting at
their chosen number
******************************/

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;

void collatz() {
	int n = 1;

	// prompts and prints until the user enters 0
	while (true) {
		cout << "Type a number and I'll print the collatz sequence "
			"starting with that number, or type 0 to stop ";
		cin >> n;

		if (n == 0) {
			return;
		}

		else if (n < 0) {
			cout << "Sorry this program only works with positive numbers. "
				"please try again ";
		}

		else {
			vector <int> series = { n }; //vector that will hold the series
			
			// runs until the series reaches one 
			while (n != 1) {

				if (n % 2 != 0) { // if its odd
					n = 3 * n + 1;
				}
				else if (n % 2 == 0) {
					n = n / 2;
				}
				else {
					cout << "something went wrong" << endl;
				}
				series.push_back(n); // adds new n value to vector 
				
				
			} 

			// print the resulting vector
			for (int i = 0; i < series.size(); i++) { 
				cout << series.at(i) << " " ;
			}
			cout << endl;
		
		}
		
		
	}
	
}