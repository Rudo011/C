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
unsigned int biti_chap_1 ();
unsigned int biti_chap_2 ();
unsigned int biti_chap_3 ();
unsigned int biti_chap_4 ();
unsigned int biti_chap_5 ();

#endif
