#include <iostream>
#include <ctime>
#include <cstdlib>

const size_t WIDTH = 25;
const size_t HEIGTH = 50;
const size_t SIZE_K = 3;

void matrix_lcnel (int [WIDTH][HEIGTH], size_t, size_t);
void kombinacia (int [WIDTH][HEIGTH], int [][SIZE_K], size_t, size_t, size_t);
void patkeri_tpel (int [][SIZE_K], size_t SIZE_K);

int main()
{
	srand(time(NULL));
	int matrix [WIDTH][HEIGTH] = {};
	int patker [SIZE_K][SIZE_K] = {
					{1,0,1},	
					{0,1,0},
					{1,0,1},
				      };
	std::cout << "PATKER@"<< std::endl;
	patkeri_tpel (patker, SIZE_K);
	std::cout << std::endl;
	matrix_lcnel (matrix, WIDTH, HEIGTH);
	kombinacia (matrix, patker, SIZE_K, WIDTH, HEIGTH);
	std::cout << std::endl;
	
	return 0;
}

void matrix_lcnel (int A[WIDTH][HEIGTH], size_t WIDTH, size_t HEIGTH)
{
	for ( int i = 0; i < WIDTH; i++ )
	{	
		std::cout << "|";

		for ( int j = 0; j < HEIGTH; j++ )
		{
			A[i][j] = rand() % 2;
			std::cout << A[i][j];
		}

		std::cout << "|" << std::endl;
	}
}

void kombinacia (int A[WIDTH][HEIGTH], int AA[][SIZE_K], size_t SIZE_K, size_t WIDTH, size_t HEIGTH)
{
	for ( int i = 0; i < WIDTH; i++ )
	{
		for ( int j = 0; j < HEIGTH; j++ )
		{
			for ( int a = 0; a < SIZE_K; a++ )
			{
				for ( int b = 0; b < SIZE_K; b++ )
				{
					if (AA[a][b] == A[i][j] && AA[a][b+1] == A[i][j+1] && AA[a][b+2] == A[i][j+2] &&
					    AA[a+1][b] == A[i+1][j] && AA[a+1][b+1] == A[i+1][j+1] && AA[a+1][b+2] == A[i+1][j+2] &&
					    AA[a+2][b] == A[i+2][j] && AA[a+2][a+1] == A[i+2][j+1] && AA[a+2][b+2] == A[i+2][j+2])
					{
						std::cout << "kordinatner - " << i << " " << j << std::endl;
					}
				}
			}
		}
	}
}

void patkeri_tpel (int A[][SIZE_K], size_t SIZE_K)
{
	for ( int i = 0; i < SIZE_K; i++ )
	{
		std::cout << "|";
		for ( int j = 0; j < SIZE_K; j++ )
		{
			std::cout << A[i][j];
		}
		std::cout << "|" << std::endl;
	}
}
