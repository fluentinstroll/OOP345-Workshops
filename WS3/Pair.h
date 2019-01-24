/*
Author: Raymond Rambo
Student Number: 122082175
Created: 26-09-2018
Updates: 27-09-2018 (finished Pair.h header file to the specifications of the Lab 3 document)
*/
#pragma once
#include "List.h"

	
	template <typename A, typename B>

	class Pair {
	private:
		A key;
		B value;
	public:
		Pair() { int(key) = '/0'; int(value) = 0; } // set to int and safe empty state
		Pair(const A& recA, const B& recB) {  key = recA; value = recB; } // set the given values to the stored values (of key and value)
		const A& getKey() const { return key; } // simply return(display) the key value(A)
		const B& getValue() const { return value; } // return(display) the associated value(B)
	};

