#include <ostream>
#include "process.h"
#include "CString.h"
void process(char *input, std::ostream& os) {
	w1::CString(*input);
	os << newString; // inserting into ostream object
}
