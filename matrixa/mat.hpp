#include <cstdlib>
#include "vector.hpp"

#ifndef MAT_HPP
#define MAT_HPP

struct mat 
{
	size_t wight;
	size_t heigth;
	int** data;
};

mat* create (size_t, size_t);
void print (mat*);
mat* sum (mat*, mat*);
void delete_matrix (mat*);
mat* multi (vector*, vector*);

#endif
