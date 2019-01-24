/* Author: Raymond Rambo (Student Number)
Date Created: 13/09/2018
Change Log:
*/
#pragma once
#include <ostream>
namespace w1 {
	extern const int maxchar = 50;
	class CString {
	private:
		char* stored[maxchar];
	public:
		CString(const char *input);
		void display(std::ostream&) const;
	};
	std::ostream operator<<(std::ostream&, const int insert); // come back to this maybe
}