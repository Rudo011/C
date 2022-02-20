#include <iostream>
#include <ctime>
#include <cstdlib>
#include "mat.hpp"
#include "vector.hpp"

mat* create (size_t wight, size_t heigth)
{
	unsigned int** data = new unsigned int*[wight];

	for ( int i = 0; i < wight; ++i )
	{
		data[i] = new unsigned int[heigth];
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
	unsigned int** data = new unsigned int*[m->size];	
	
	for ( int i = 0; i < m->size; ++i )
	{
		data[i] = new unsigned int[n->size];
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

mat* matrix_lcnel (mat* matrix, size_t n)
{
	switch (n)
	{
	case 1:
	for ( int i = 0; i < matrix->wight; ++i )
	{
		for ( int j = 0; j < matrix->heigth; ++j )
		{
			unsigned int bit = 0;
			unsigned int red = rand() % 51;
			unsigned int blue = rand() % 51;
			unsigned int green = rand () % 51;

			bit = bit | red;
			bit = bit << 8;
			bit = bit | blue;
			bit = bit << 8;
			bit = bit | green;
			bit = bit << 8;
	
			matrix->data[i][j] = bit;
		}
	}
	break;

	case 2:
	for ( int i = 0; i < matrix->wight; ++i )
	{
		for ( int j = 0; j < matrix->heigth; ++j )
		{
			unsigned int bit = 0;
			unsigned int red = 51 + rand() % 102;
			unsigned int blue = 51 + rand() % 102;
			unsigned int green = 51 + rand() % 102;

			bit = bit | red;
			bit = bit << 8;
			bit = bit | blue;
			bit = bit << 8;
			bit = bit | green;
			bit = bit << 8;

			matrix->data[i][j] = bit;
		}
	}
	break;

	case 3:
	for ( int i = 0; i < matrix->wight; ++i )
	{
		for ( int j = 0; j < matrix->heigth; ++j )
		{
			unsigned int bit = 0;
			unsigned int red = 102 + rand() % 153;
			unsigned int blue = 102 + rand() % 153;
			unsigned int green = 102 + rand() % 153;

			bit = bit | red;
			bit = bit << 8;
			bit = bit | blue;
			bit = bit << 8;
			bit = bit | green;
			bit = bit << 8;

			matrix->data[i][j] = bit;
		}
	}
	break;

	case 4:
	for ( int i = 0; i < matrix->wight; ++i )
	{
		for ( int j = 0; j < matrix->heigth; ++j )
		{
			unsigned int bit = 0;
			unsigned int red = 153 + rand() % 204;
			unsigned int blue = 153 + rand() % 204;
			unsigned int green = 153 + rand() % 204;

			bit = bit | red;
			bit = bit << 8;
			bit = bit | blue;
			bit = bit << 8;
			bit = bit | green;
			bit = bit << 8;

			matrix->data[i][j] = bit;
		}
	}
	break;

	case 5:
	for ( int i = 0; i < matrix->wight; ++i )
	{
		for ( int j = 0; j < matrix->heigth; ++j )
		{
			unsigned int bit = 0;
			unsigned int red = 204 + rand() % 255;
			unsigned int blue = 204 + rand() % 255;
			unsigned int green = 204 + rand() % 255;

			bit = bit | red;
			bit = bit << 8;
			bit = bit | blue;
			bit = bit << 8;
			bit = bit | green;
			bit = bit << 8;

			matrix->data[i][j] = bit;
		}
	}
	break;
	}
		
	mat* b = new mat;
	b->wight = matrix->wight;
	b->heigth = matrix->heigth;
	b->data = matrix->data;
	
	return b;
}

unsigned int biti_chap_1 ()
{
	unsigned int bit = 0;
	unsigned int red = 51;
	unsigned int blue = 51;
	unsigned int green = 51;

	bit = bit | red;
	bit = bit << 8;
	bit = bit | blue;
	bit = bit << 8;
	bit = bit | green;
	bit = bit << 8;
	
	return bit;
}

unsigned int biti_chap_2 ()		
{
	unsigned int bit = 0;
	unsigned int red = 102;
	unsigned int blue = 102;
	unsigned int green = 102;
	
	bit = bit | red;
	bit = bit << 8;
	bit = bit | blue;
	bit = bit << 8;
	bit = bit | green;
	bit = bit << 8;
	
	return bit;
}

unsigned int biti_chap_3 ()	
{
	unsigned int bit = 0;
	unsigned int red = 153;
	unsigned int blue = 153;
	unsigned int green = 153;
		
	bit = bit | red;
	bit = bit << 8;
	bit = bit | blue;
	bit = bit << 8;
	bit = bit | green;
	bit = bit << 8;
	
	return bit;
}

unsigned int biti_chap_4 ()	
{
	unsigned int bit = 0;
	unsigned int red = 204;
	unsigned int blue = 204;
	unsigned int green = 204;

	bit = bit | red;
	bit = bit << 8;
	bit = bit | blue;
	bit = bit << 8;
	bit = bit | green;
	bit = bit << 8;

	return bit;
}

unsigned int biti_chap_5 ()
{
	unsigned int bit = 0;
	unsigned int red = 255; 
	unsigned int blue = 255;
	unsigned int green = 255;

	bit = bit | red;
	bit = bit << 8;
	bit = bit | blue;
	bit = bit << 8;
	bit = bit | green;
	bit = bit << 8;
	
	return bit;
}

void mijin_hanel (unsigned int** matrix, size_t size, int alfa)
{
	for ( int i = 0; i < size*9; ++i )
	{
		std::cout << "|";
		for ( int j = 0; j < size; ++j )
		{
			unsigned int a = matrix[i][j];
			unsigned int bit = a >> 24;
			unsigned int bit_1 = a << 8;
			bit_1 = bit_1 >> 24;
			unsigned int bit_2 = a << 16;
			bit_2 = bit_2 >> 24;

			unsigned int mijin = (bit + bit_1 + bit_2) / 3;
			
			matrix[i][j] = mijin;
			std::cout << matrix[i][j] << ", ";
		}
		std::cout << "|" << std::endl;
	}

        for ( int i = 0; i <= size*9; ++i )
        {
                for ( int j = 0; j <= size; ++j )
                {
			int n = matrix[i][j] - matrix[i][j+1];
                        if ( n  >  alfa ) 
                        {
                                std::cout << "Кординаты изменения цвета: " << i << "," << j << " - " << i << "," << j+1 << std::endl;
                        }
                }
        }
}
