/*Enigma Swan Adams
* CS 201 homework #3
date 2/16/2021
fixed finction to convert celsius to 
kelvin with comments explaining
what was done to fix it
******************************/

/*The original isn't optimized since it
declares an unnecessary local variable 
but it also doesn't work in general, becasue the
original returns "int" (which is nonsense) instead
of returning k, also they declared k as an int
when it should have been decalred as a double 
if it was going to be decalred at all*/

/* it produced this error code: E0254
* declaring k and int doesn't stop the program, 
* but the answeres produced are incorrect
*/

#include <iostream>

double ctok(double c) { 
	if (c < -273.15) {
		std::cout << "There was an error. The temperatur you entered was less than 0K which is impossible. \n"
			"Nonetheless here is what the temperatur would if it were possible" << std::endl;
	}

	return c + 273.15;
	
}

