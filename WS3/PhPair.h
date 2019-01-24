// Name: 
// Seneca Student ID:
// Seneca email:
// Date of completion:
//
// I confirm that the content of this file is created by me,
// with the exception of the parts provided to me by my professor.

#ifndef W3_PAIR_H__
#define W3_PAIR_H__



template <typename A, typename B>
class Pair
{
	A key;
	B value;
public:
	Pair() : key{}, value{}
	{

	}
	Pair(const A& a, const B& b): key{ a }, value{ b }
	{

	}

	const A& getKey() const				// gets the value of 'A'
	{
		return key;
	}
	const B& getValue() const				// gets the value of 'B'
	{
		return value;
	}
};

#endif 