#include <cstdlib>
#include "vector.hpp"

#ifndef MAT_HPP
#define MAT_HPP

struct mat 
{
	size_t wight;
	size_t heigth;
	unsigned int** data;
};

mat* create (size_t, size_t);
void print (mat*);
mat* sum (mat*, mat*);
void delete_matrix (mat*);
mat* multi (vector*, vector*);
mat* matrix_lcnel (mat*, size_t);
void mijin_hanel (unsigned int**, unsigned int**, size_t, int);
mat* rbg_lcnel (mat*, size_t);

#endif
