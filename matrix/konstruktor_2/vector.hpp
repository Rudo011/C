#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <cstdlib>

class vector
{
	public:
		vector(size_t s);
		void print();
		~vector();
	
		size_t m_size;
		int* m_data;
};

#endif
