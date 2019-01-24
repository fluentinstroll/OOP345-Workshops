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

