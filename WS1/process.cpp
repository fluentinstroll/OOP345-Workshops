/* Author: Raymond Rambo (Student Number)
Date Created: 13/09/2018
Change Log:
*/
#include <ostream>
#include "process.h"
#include "CString.h"
void process(char *input, std::ostream& os) {
	w1::CString(*input); // figure out how to make this into a new object (probably requires finishing the constructor)
	os << newString; // inserting into ostream object
}