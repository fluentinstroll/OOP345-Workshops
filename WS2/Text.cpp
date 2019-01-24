#include <fstream>
#include "Text.h"

namespace w2 {
	

	Text::Text(const char& rec) {
		std::ifstream fin("gutenburg_shakespeare");
		
		if (!fin.is_open) { fileName[0] = '/0'; }
		else while (fin.good()) {
			fin >> fileName;
		}
	}

	Text::~Text() {
		fileName[0] = '/0';
		delete[] fileName;
	}

	Text::Text(const Text &obj) {
		strncpy(fileName, obj.fileName, size());
	}

	Text::Text(Text&&){} // return after you figure out what a move constructor is

	Text& Text::operator=(Text){
		// copy assignment operator	
	} 
	Text& Text::operator=(Text&&) {
	
	} // move assignment operator
	size_t Text::size() const {
		
	} // returns number of records
}
