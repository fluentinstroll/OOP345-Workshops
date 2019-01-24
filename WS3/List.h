/*
Author: Raymond Rambo
Student Number: 122082175
Created: 26-09-2018
Updates: 27-09-2018 (finished List.h header file to the specifications of the Lab 3 document)
*/
#pragma once
#include "Pair.h"


	template <typename T, int N> 
	
	class List {
	private:
		T itemList[N]; // T type array that holds any number of T
		int entryNumber = 0;
	public:
		List() { int(itemList) = 0; } // convert to int and set to safe empty state
		std::size_t size() const { return entryNumber; } // return number of entries
		const T& operator[](int index) const { return itemList[index]; } // return the item at the index received
		void operator+=(const T& rec) { // add a T type value to the array and then add another slot to the array
			if (entryNumber < N) {
				itemList[entryNumber] = rec;
				entryNumber++;
			}
		}
	};

