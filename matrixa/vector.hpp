#include <cstdlib>

#ifndef VECTOR_HPP
#define VECTOR_HPP

struct vector
{
	vector(size_t s);
	~vector();

	size_t m_size;
	int* m_data;
};

vector* create (size_t);
void print(vector*);
void delete_vector (vector*);

#endif
