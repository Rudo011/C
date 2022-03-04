#include <iostream>
#include "mat.hpp"
#include "vector.hpp"

int main()
{
	srand (time(NULL));
	
	size_t size = 0;
	int alfa = 0;
	std::cout << "Введите размер вектора -  ";
	std::cin >> size;
	std::cout << std::endl;
	std::cout << "Введите отметку при которой распознается изменение цвета - ";
	std::cin >> alfa;

	vector vec1_1(size);
	vector vec1_2(size);
	mat* mult_1 = multi(vec1_1, vec1_2);	

	vector vec2_1(size);
	vector vec2_2(size);
	mat* mult_2 = multi(vec2_1, vec2_2);

	vector vec3_1(size);
	vector vec3_2(size);
	mat* mult_3 = multi(vec3_1, vec3_2); 

	vector vec4_1(size);
	vector vec4_2(size);
	mat* mult_4 = multi(vec4_1, vec4_2);

	vector vec5_1(size);
	vector vec5_2(size);
	mat* mult_5 = multi(vec5_1, vec5_2);

	vector vec6_1(size);
	vector vec6_2(size);
	mat* mult_6 = multi(vec6_1, vec6_2);

	vector vec7_1(size);
	vector vec7_2(size);
	mat* mult_7 = multi(vec7_1, vec7_2);
	
	vector vec8_1(size);
	vector vec8_2(size);
	mat* mult_8 = multi(vec8_1, vec8_2);

	vector vec9_1(size);
	vector vec9_2(size);
	mat* mult_9 = multi(vec9_1, vec9_2);
	
	matrix_lcnel (mult_1, 1 + rand() % 5);
	matrix_lcnel (mult_2, 1 + rand() % 5);
	matrix_lcnel (mult_3, 1 + rand() % 5);
	matrix_lcnel (mult_4, 1 + rand() % 5);
	matrix_lcnel (mult_5, 1 + rand() % 5);
	matrix_lcnel (mult_6, 1 + rand() % 5);
	matrix_lcnel (mult_7, 1 + rand() % 5);
	matrix_lcnel (mult_8, 1 + rand() % 5);
	matrix_lcnel (mult_9, 1 + rand() % 5);
	std::cout << std::endl;
	
	unsigned int** MASIV = new unsigned int*[size*9];

	for ( int i = 0; i < size*9; ++i )
	{
		MASIV[i] = new unsigned int[size];
	}

	for ( int i = 0; i < size*9; ++i )
	{
		for ( int j = 0; j < size; ++j )
		{
			MASIV[i][j] = 0;
		}
	}

	unsigned int** NEW_MASIV = new unsigned int*[size*9];

	for ( int i = 0; i < size*9; ++i )
	{
		NEW_MASIV[i] = new unsigned int[size];
	}
	
	for ( int i = 0; i < size*9; ++i )
	{
		for ( int j = 0; j < size; ++j )
		{
			NEW_MASIV[i][j] = 0;
		}
	}

	std::cout << std::endl;
	
	for ( int i = 0; i < size; ++i )
	{
		for ( int j = 0; j < size; ++j )
		{
				MASIV[i][j] = mult_1->data[i][j];
				MASIV[i+size][j] = mult_2->data[i][j];
				MASIV[i+size*2][j] = mult_3->data[i][j];
				MASIV[i+size*3][j] = mult_4->data[i][j];
				MASIV[i+size*4][j] = mult_5->data[i][j];	
				MASIV[i+size*5][j] = mult_6->data[i][j];
				MASIV[i+size*6][j] = mult_7->data[i][j];
				MASIV[i+size*7][j] = mult_8->data[i][j];
				MASIV[i+size*8][j] = mult_9->data[i][j];
		}	
	}
	

	std::cout << std::endl;
	
	mijin_hanel (NEW_MASIV, MASIV, size, alfa);

	for ( int i = 0; i < size*9; ++i )
	{
		std::cout << "|";
		for ( int j = 0; j < size; ++j )
		{
			std::cout << NEW_MASIV[i][j] << ",";
		}
		std::cout << "|" << std::endl;
	}

	std::cout << std::endl;
	

	std::cout << std::endl;

	delete_matrix (mult_1);
	delete_matrix (mult_2);
	delete_matrix (mult_3);
	delete_matrix (mult_4);
	delete_matrix (mult_5);
	delete_matrix (mult_6);
	delete_matrix (mult_7);
	delete_matrix (mult_8);
	delete_matrix (mult_9);
	
	delete []MASIV;
	delete []NEW_MASIV;

	return 0;
}	
