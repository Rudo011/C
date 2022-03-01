#include <iostream>
#include <ctime>
#include <cstdlib>
#include "mat.hpp"
#include "vector.hpp"

mat* rbg_lcnel (mat* matrix, size_t n)
{
        switch (n) 
        {
                case 1:
    
                for ( int i = 0; i < matrix->wight; ++i )
                {
                        for ( int j = 0; j < matrix->heigth; ++j )
                        {
                                unsigned int bit = 0;
                                unsigned int red = 230 + rand() % 15;
                                unsigned int blue = 230 + rand() % 15;
                                unsigned int green = 230 + rand() % 15;

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
				unsigned int red = 64 + rand() % 15;
				unsigned int blue = 64 + rand() % 15;
				unsigned int green = 64 + rand() % 15;

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
				unsigned int red = 50 + rand() % 15;
				unsigned int blue = 50 + rand() % 15;
				unsigned int green = 50 + rand() % 15;
			
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
				unsigned int red = 70 + rand() % 15;
				unsigned int blue = 70 + rand() % 15;
				unsigned int green = 70 + rand() % 15;
	
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
				unsigned int red = 90 + rand() % 15;
				unsigned int blue = 90 + rand() % 15;
				unsigned int green = 90 + rand() % 15; 
		
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
	
		case 6:

		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 100 + rand() % 15;
				unsigned int blue = 100 + rand() % 15;
				unsigned int green = 100 + rand() % 15;
		
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
	
		case 7:

		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 15 + rand() % 15;
				unsigned int blue = 15 + rand() % 15;
				unsigned int green = 15 + rand() % 15;
			
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
	
		case 8:

		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 200 + rand() % 15;
				unsigned int blue = 200 + rand() % 15;
				unsigned int green = 200 + rand() % 15;
			
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

		case 9:

		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 160 + rand() % 15;
				unsigned int blue = 160 + rand() % 15;
				unsigned int green = 160 + rand() % 15;
			
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

void mijin_hanelu (unsigned int** matrix, size_t size)
{
	for ( int i = 0; i < size*3; ++i )
	{
		std::cout << "|";
		for ( int j = 0; j < size*3; ++j )
		{
			unsigned int a = matrix[i][j];
			unsigned int bit = a >> 24;
			unsigned int bit_1 = a << 8;
			bit_1 = bit_1 >> 24;
			unsigned int bit_2 = a << 16;
			bit_2 = bit_2 >> 24;
			unsigned int mijin = (bit + bit_1 + bit_2) / 3;
			matrix[i][j] = mijin;
			std::cout << matrix[i][j] << ",";
		}
		std::cout << "|" << std::endl;
	}
}

void hamematum (unsigned int** matrix, unsigned int** new_matrix, size_t size)
{
	unsigned int alfa = 30;

	unsigned int sum_1 = 0;
	for ( int i = 0; i < size; ++i )
	{
		for ( int j = 0; j < size; ++j )
		{
			sum_1+= matrix[i][j];
		}
	}
	std::cout << sum_1 / (size*size) << std::endl;

	unsigned int sum_2 = 0;
	for ( int i = 0; i < size; ++i )
	{
		for ( int j = size; j < size*2; ++j )
		{
			sum_2+= matrix[i][j];
		}
	}
	std::cout << sum_2 / (size*size) << std::endl;
	
	unsigned int sum_3 = 0;
	for ( int i = 0; i < size; ++i )
	{
		for ( int j = size*2; j < size*3; ++j )
		{
			sum_3+= matrix[i][j];
		}
	}
	std::cout << sum_3 / (size*size) << std::endl;

	unsigned int sum_4 = 0;
	for ( int i = size; i < size*2; ++i )
	{
		for ( int j = 0; j < size; ++j )
		{
			sum_4+= matrix[i][j];
		}
	}
	std::cout << sum_4 / (size*size) << std::endl;

	unsigned int sum_5 = 0;
	for ( int i = size; i < size*2; ++i )
	{
		for ( int j = size; j < size*2; ++j )
		{
			sum_5+= matrix[i][j];
		}
	}
	std::cout << sum_5 / (size*size) << std::endl;

	unsigned int sum_6 = 0;
	for ( int i = size; i < size*2; ++i )
	{
		for ( int j = size*2; j < size*3; ++j )
		{
			sum_6+= matrix[i][j];
		}
	}
	std::cout << sum_6 / (size*size) << std::endl;

	unsigned int sum_7 = 0;
	for ( int i = size*2; i < size*3; ++i )
	{
		for ( int j = 0; j < size; ++j )
		{
			sum_7+= matrix[i][j];
		}
	}
	std::cout << sum_7 / (size*size) << std::endl;

	unsigned int sum_8 = 0;
	for ( int i = size*2; i < size*3; ++i )
	{
		for ( int j = size; j < size*2; ++j )
		{
			sum_8+= matrix[i][j];
		}
	}
	std::cout << sum_8 / (size*size) << std::endl;

	unsigned int sum_9 = 0;
	for ( int i = size*2; i < size*3; ++i )
	{
		for ( int j = size*2; j < size*3; ++j )
		{
			sum_9+= matrix[i][j];
		}
	}
	std::cout << sum_9 / (size*size) << std::endl;

	for ( int i = 0; i < size; ++i )
	{
		if ( sum_1 - sum_2 > alfa && sum_1 - sum_2 < alfa - (alfa*alfa) )
		{
			new_matrix[i][size] = 1;
		}
		if ( sum_2 - sum_3 > alfa && sum_2 - sum_3 < alfa - (alfa*alfa) )
		{
			new_matrix[i][size*2] = 1;
		}
		if ( sum_3 - sum_4 > alfa && sum_3 - sum_4 < alfa - (alfa*alfa) )
		{
			new_matrix[i][size*3-1] = 1;
		}
	}

	for ( int j = 0; j < size; ++j )
	{
		if ( sum_1 - sum_4 > alfa && sum_1 - sum_4 < alfa - (alfa*alfa) )
		{
	 		new_matrix[size][j] = 1;
		}
		if ( sum_4 - sum_7 > alfa && sum_4 - sum_7 < alfa - (alfa*alfa) )
		{
			new_matrix[size*2][j] = 1;
		}
	}

	for ( int i = size; i < size*2; ++i )
	{
		if ( sum_4 - sum_5 > alfa && sum_4 - sum_5 < alfa - (alfa*alfa) )
		{
			new_matrix[i][size] = 1;
		}
		if ( sum_5 - sum_6 > alfa && sum_5 - sum_6 < alfa - (alfa*alfa) )
		{
			new_matrix[i][size*2] = 1;
		}
		if (sum_6 - sum_7 > alfa && sum_6 - sum_7 < alfa - (alfa*alfa) )
		{
			new_matrix[i][size*3-1] = 1;
		}
	}
	for ( int i = size*2; i < size*3; ++i )
	{
		if ( sum_7 - sum_8 > alfa && sum_7 - sum_8 < alfa - (alfa*alfa) )
		{
			new_matrix[i][size] = 1;
		}
		if ( sum_8 - sum_9 > alfa && sum_8 - sum_9 < alfa - (alfa*alfa) )
		{
			new_matrix[i][size*2] = 1;
		}
	}
	for ( int j = size; j < size*2; ++j )
	{
		if ( sum_2 - sum_5 > alfa && sum_2 - sum_5 < alfa - (alfa*alfa) )
		{
			new_matrix[size][j] = 1;
		}
		if ( sum_5 - sum_8 > alfa && sum_5 - sum_8 < alfa - (alfa*alfa) )
		{
			new_matrix[size*2][j] = 1;
		}
	}
	for ( int j = size*2; j < size*3; ++j )
	{
		if ( sum_3 - sum_6 > alfa && sum_3 - sum_6 < alfa - (alfa*alfa) )
		{ 
			new_matrix[size][j] = 1;
		}
		if ( sum_6 - sum_9 > alfa && sum_6 - sum_9 < alfa - (alfa*alfa) )
		{
			new_matrix[size*2][j] = 1;
		}
	}
}

void print(unsigned int** matrix, size_t size)
{
	for ( int i = 0; i < size*3; ++i )
	{
		std::cout << "|";
		for ( int j = 0; j < size*3; ++j )
		{
			std::cout << matrix[i][j] << ",";
		}
		std::cout << "|" << std::endl;
	}
}

void taza_hamematutyun (unsigned int** matrix, unsigned int** new_matrix, size_t size)
{
	unsigned int epsilon = 20;

	for ( int i = 0; i < size*3-1; ++i )
	{
		for ( int j = 0; j < size*3-1; ++j )
		{
			if (matrix[i][j] - matrix[i][j+1] > epsilon && matrix[i][j] - matrix[i][j+1] < epsilon - (epsilon*2))  
			{
				new_matrix[i][j] = 1;
			}
			if (matrix[i][j] - matrix[i+1][j] > epsilon && matrix[i][j] - matrix[i+1][j] < epsilon - (epsilon*2))
			{
				new_matrix[i][j] = 1;
			}
		}
	}
}

void new_hamematum ( unsigned int** matrix, unsigned int** new_matrix, size_t size)
{
	unsigned int epsilon = 20;

	for ( int i = 0; i < size*3; ++i )
	{
		for ( int j = 0; j < size*3; ++j )
		{
			unsigned int red = 0;
			unsigned int blue = 0;
			unsigned int green = 0;
			unsigned int red_1 = 0;
			unsigned int blue_1 = 0;
			unsigned int green_1 = 0;

			red = matrix[i][j] >> 24;
			blue = matrix[i][j] << 8;
			blue = blue >> 24;
			green = matrix[i][j] << 16;
			green = green >> 24;

			red_1 = matrix[i][j+1] >> 24;
			blue_1 = matrix[i][j+1] << 8;
			blue_1 = blue_1 >> 24;
			green_1 = matrix[i][j+1] << 16;
			green_1 = green_1 >> 24;

			if ( red - red_1 > epsilon && blue - blue_1 > epsilon && green - green_1 > epsilon)
			{
				new_matrix[i][j] = 1;
			}
		}
	}
}


			

				
			
