#include <cstdlib>

#ifndef VECTOR_HPP
#define VECTOR_HPP

class vector
{
	public:
		vector(size_t s);
		~vector();

	private:
		size_t m_size;
		int* m_data;
};

#endif
