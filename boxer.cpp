/*Enigma Swan Adams
* CS 201 homework #3
date 2/16/21
main program which prompts
takers user input
and calls the function box_print 
******************************/

#include "boxer.h"


#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main() {
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
	
	return 0;
}