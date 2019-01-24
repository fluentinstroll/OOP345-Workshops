/* Author: Raymond Rambo (Student Number)
Date Created: 13/09/2018
Change Log:
*/

#include <ostream>
#include "CString.h"

namespace w1 {
	
	CString::CString(const char *input) { // checks if string is null, clears it if so, if not, inserts new string
		if (input == nullptr) {
			char *newString = nullptr;
			newString = '\0';
		}
		else {
			const char* newString = input;
			strcpy(stored, newString);
		}
	}

	void CString::display(std::ostream& os) const {
		os << stored;
	}

	std::ostream operator<<(std::ostream& os, const int insert) { // come back to this, it's not done
		os << "Maximum number of characters stored : " << insert;
		for (count = 0, count > insert, count++) {// finish this loop
			os << count << ": " << 
		}

	}
}