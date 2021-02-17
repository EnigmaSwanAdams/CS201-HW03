/*Enigma Swan Adams
* CS 201 homework #3
date 2/16/2021
function to print the box
and word as outlined in the 
homework assignment
******************************/

#include "boxer.h"
#include <string>
#include "print_char.h"

using std::string;
using std::cout;
using std::endl;


void box_print(string word, int n) {

	// top
	for (int i = 0; i < n; i++) {
		print_char('*', word.size() + (n + 1) * 2);
		cout << endl;
	}
	

	// middle: similair for every word
	print_char('*', n); 
	print_char(' ', word.size() + 2);
	print_char('*', n);
	cout << endl;

	print_char('*', n);
	cout << " " << word << " ";
	print_char('*', n);
	cout << endl;

	print_char('*', n);
	print_char(' ', word.size() + 2);
	print_char('*', n);
	cout << endl;

	//bottom (same as the top)
	for (int i = 0; i < n; i++) {
		print_char('*', word.size() + (n + 1) * 2);
		cout << endl;
	}


	

	



}