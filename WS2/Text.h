#pragma once
#include <cstring>
/*all definitions in Text.cpp*/
namespace w2 {
	class Text {
	private:
		char fileName[]; // stores the name of the file and the contents
	public:
		Text(const char&); // constructor
		~Text(); // destructor
		Text(const Text &obj); // copy constructor
		Text(Text&&); // move constructor
		Text& operator=(Text); // copy assignment operator
		Text& operator=(Text&&); // move assignment operator
		size_t size() const; // returns number of records
	};
}