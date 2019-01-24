// Name: Philip 
// Seneca Student ID: 122172174
// Seneca email: pmroczkowski@myseneca.ca
// Date of completion: 2018-09-27
//
// I confirm that the content of this file is created by me,
// with the exception of the parts provided to me by my professor.

#ifndef W3_LIST_H__
#define W3_List_H__



template<typename T = int, unsigned int N = 1>
class List {
	T array[N];
	unsigned int n; 
	unsigned int max = N; 
	T blank;

public:
	List() : n{ 0u } {}
	size_t size() const 
	{
		return n;
	}

	
	const T& operator[](unsigned int index) const 
	{
		//Out Of bounds
		return index < n ? array[index] : blank;
	}

	void operator+=(const T& other) 
	{
		if (n < max) 
		{
			array[n] = other;
			++n;
		}
		else
		{
			std::cout << "NO SPACE" << std::endl;
		}
	}
};

#endif //LIST_H__