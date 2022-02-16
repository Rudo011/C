#include <iostream>
#include <ctime>
#include <cstdlib>
#include "mat.hpp"
#include "vector.hpp"

mat* create (size_t wight, size_t heigth)
{
	int** data = new int*[wight];

	for ( int i = 0; i < wight; ++i )
	{
		data[i] = new int[heigth];
	}
	
	for ( int i = 0; i < wight; ++i )
	{
		for ( int j = 0; j < heigth; ++j )
		{
			data[i][j] = rand() % 2;
		}
	}

	mat* m = new mat;
	m->wight = wight;
	m->heigth = heigth;
	m->data = data;
	
	return m;
}

void print (mat* matrix)
{
	for ( int i = 0; i < matrix->wight; ++i )
	{
		std::cout << "|";

		for ( int j = 0; j < matrix->heigth; ++j )
		{
			std::cout << matrix->data[i][j];
		}

		std::cout << "|" << std::endl;
	}
}
		
mat* sum ( mat* masiv1, mat* masiv2 )
{
	mat* result = create(masiv1->wight, masiv1->heigth);
	for ( int i = 0; i < masiv1->wight; ++i )
	{
		for ( int j = 0; j < masiv1->heigth; ++j )
		{
			result->data[i][j] = masiv1->data[i][j] | masiv2->data[i][j];
		}
	}
	return result;
}

void delete_matrix (mat* matrix)
{
	for ( int i = 0; i < matrix->wight; ++i )
	{
		delete []matrix->data[i];
	}
	delete []matrix->data;
	delete matrix;
}

vector* create (size_t size)
{
	int* data = new int[size];

	for ( int i = 0; i < size; ++i )
	{
		data[i] = rand() % 2;
	}

	vector* m = new vector;
	m->size = size;
	m->data = data;

	return m;
}

void print(vector* m)
{
	for (int i = 0; i < m->size; ++i )
	{
		std::cout << "| " << m->data[i] << " |";
	}
	std::cout << std::endl;
}

mat* multi (vector* m, vector* n)
{
	int** data = new int*[m->size];	
	
	for ( int i = 0; i < m->size; ++i )
	{
		data[i] = new int[n->size];
	}

	for ( int i = 0; i < m->size; ++i )
	{
		for ( int j = 0; j < n->size; ++j )
		{
			data[i][j] = m->data[i] * n->data[j];
		}
	}
	
	mat* A = new mat;
	A->wight = m->size;
	A->heigth = n->size;
	A->data = data;

	return A;
}

void delete_vector (vector* vec)
{
	delete vec->data;
	delete vec;
}
