#include <iostream>

const size_t WIDTH_I = 7;
const size_t HEIGTH_I = 10;

void spitak_sevMatrica (unsigned int [WIDTH_I][HEIGTH_I], size_t, size_t);
void qarakusu_Chanachum(unsigned int [WIDTH_I][HEIGTH_I], size_t, size_t);

int main()
{
	unsigned int matrix [WIDTH_I][HEIGTH_I] = {0};
	spitak_sevMatrica (matrix, WIDTH_I, HEIGTH_I);
	std::cout << std::endl;
	qarakusu_Chanachum(matrix, WIDTH_I, HEIGTH_I);
	std::cout << std::endl;

}

void spitak_sevMatrica (unsigned int A[WIDTH_I][HEIGTH_I], size_t WIDTH_I, size_t HEIGTH_I)
{
	for ( int i = 0; i < WIDTH_I; i++ )
	{
		std::cout << "| ";
		for ( int j = 0; j < HEIGTH_I; j++ )
		{
			if ( i >= 1 && i <= 4 && j >= 4 && j <= 7)
			{
				unsigned int bit = 0;
				unsigned int zero = 0;
		
				bit = bit | zero;
				bit = bit << 8;
				bit = bit | zero;
				bit = bit << 8;
				bit = bit | zero;
				bit = bit << 8;
					
				A[i][j] = bit;
			}

			else 
			{
			unsigned int bit = 0;
			unsigned int white = 255;
			
			bit = bit | white;
			bit = bit << 8;
			bit = bit | white;
			bit = bit << 8;
			bit = bit | white;
			bit = bit << 8;
			
			A[i][j] = bit;
			}
			std::cout << A[i][j] << " ";
		}
		std::cout << " |" << std::endl;	
	}
}

void qarakusu_Chanachum (unsigned int A[WIDTH_I][HEIGTH_I], size_t WIDTH_I, size_t HEIGTH_I)
{
	for ( int i = 0; i < WIDTH_I; i++ )
	{
		for ( int j = 0; j < HEIGTH_I; j++ )
		{
			if (A[i][j] == 0)
			{
				std::cout << "Black Kordinat -  " << i << " " << j << std::endl;
			}
		}
	}
}
