/*Enigma Swan Adams
* CS 201 homework #3
date 2/16/21
main program which prompts
takers user input
and calls the function box_print 
******************************/

#include "boxer.h"
#include "collatz.h"
#include "kelvin.h"

#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main() {

	//fixed and annotated kelvin main() code

	//double c = 0; //This line is unneccessary

	cout << "Enter a temperature in celsius" 
		"\nand I'll print it in Kelvin "; // they didn't intially prompt the user
	double d; // if they're going to ask the user to enter d they need to declare it first
	cin >> d;  
	double k = ctok(d); // they wrote "c" when they should have written d 
	// both because with quotes around it the compiler thinks "c" is a character
	// (and the function doesn't take characters), and because they asked the user 
	// to enter d, not c. So if presumably they want to convert the 
	// users value to Kelvin they need to use the variable the user entered.
	
	cout << k << '\n'; // They capitalized the C in cout which is erroneous

	
	
	
	
	//cout << "55.5 c = " << ctok(55.5) << " in kelvin" << endl;//used main to test ctok function my way

	//collatz(); //used main to test collatz() right now
	/*
	string word = "";
	int n = 0;

	
	while(true){

		// get word 
		cout << "Enter a word, or type stop to stop "; 
		cin >> word;
		cout << endl;
		
		//converting to lowercase in case they entered stop but not in lowercase
		// it'll stop even if they type somehting like "STOP" or "Stop"
		string wordLower = word;
		for (int i = 0; i < word.size(); i++) {
			wordLower.at(i) = tolower(word.at(i));
		}
		
		//exits the while loop here only if the user asks to stop
		if (wordLower == "stop") {
			break;
		}

		//gets number
		cout << "Now enter a positive number ";
		cin >> n;
		cout << endl;

		// lets the, know if they entered zero or a negative number
		if (n <= 0) {
			cout << "Oops that wasn't a positive number, try again" << endl;
			
		}
		
		// we actually call the function only if the word wasn't stop, and the
		// number was positve
		else{
			
			box_print(word, n);
		}
		
	} 
	*/
	
	return 0;
}