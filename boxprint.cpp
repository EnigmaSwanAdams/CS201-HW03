/*Enigma Swan Adams
* CS 201 homework #3
date 2/16/2021
function to print the box
and word as outlined in the 
homework assignment
******************************/

#include "boxer.h"
#include <string>
using std::string;
using std::cout;


void box_print(string word, int n) {

	for (int i = 0; i <= word.size() + (n + 1) * 2; i++) {
		cout << "*";
	}

}