#include <iostream>
#include "mat.hpp"
#include "vector.hpp"

int main()
{
	srand (time(NULL));
	
	size_t size = 0;
	std::cout << "Введите размер вектора -  ";
	std::cin >> size;

	vector* vec1_1 = create(size);
	vector* vec1_2 = create(size);
	mat* mult_1 = multi(vec1_1, vec1_2);	

	vector* vec2_1 = create(size);
	vector* vec2_2 = create(size);
	mat* mult_2 = multi(vec2_1, vec2_2);

	vector* vec3_1 = create(size);
	vector* vec3_2 = create(size);
	mat* mult_3 = multi(vec3_1, vec3_2); 

	vector* vec4_1 = create(size);
	vector* vec4_2 = create(size);
	mat* mult_4 = multi(vec4_1, vec4_2);

	vector* vec5_1 = create(size);
	vector* vec5_2 = create(size);
	mat* mult_5 = multi(vec5_1, vec5_2);

	matrix_lcnel (mult_1, 1 + rand() % 5);
	print (mult_1);
	matrix_lcnel (mult_2, 1 + rand() % 5);
	print (mult_2);
	matrix_lcnel (mult_3, 1 + rand() % 5);
	print (mult_3);
	matrix_lcnel (mult_4, 1 + rand() % 5);
	print (mult_4);
	matrix_lcnel (mult_5, 1 + rand() % 5);
	print (mult_5);

	std::cout << std::endl;
	
	unsigned int** MASIV = new unsigned int*[size*2];

	for ( int i = 0; i < size*2; ++i )
	{
		MASIV[i] = new unsigned int[size*2];
	}

	for ( int i = 0; i < size*2; ++i )
	{
		for ( int j = 0; j < size*2; ++j )
		{
			MASIV[i][j] = 0;
		}
	}
	
	for ( int i = 0; i < size*2; ++i )
	{
		for ( int j = 0; j < size*2; ++j )
		{
			if (i <= size-1)
			{
				MASIV[i][j] = mult_1->data[i][j];
			}
			if (i >= size)
			{
				MASIV[i][j] = mult_2->data[i-(size-1)][j-size];
			}
		}
	}
	
	for ( int i = 0; i < size*2; ++i )
	{
		for ( int j = 0; j < size*2; ++j )
		{
			std::cout << MASIV[i][j];
		}
		std::cout << std::endl;
	}

	for ( int i = 0; i < size*2; ++i )
	{
		delete []MASIV[i];
	}
	delete MASIV;

	delete_vector (vec1_1);
	delete_vector (vec1_2);
	delete_vector (vec2_1);
	delete_vector (vec2_2);
	delete_vector (vec3_1);
	delete_vector (vec3_2);
	delete_vector (vec4_1);
	delete_vector (vec4_2);
	delete_vector (vec5_1);
	delete_vector (vec5_2);

	delete_matrix (mult_1);
	delete_matrix (mult_2);
	delete_matrix (mult_3);
	delete_matrix (mult_4);
	delete_matrix (mult_5);
	
	return 0;
}	
