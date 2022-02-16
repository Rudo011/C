#include <cstdlib>

#ifndef VECTOR_HPP
#define VECTOR_HPP

struct vector
{
	size_t size;
	int* data;
};

vector* create (size_t);
void print(vector*);
void delete_vector (vector*);

#endif
