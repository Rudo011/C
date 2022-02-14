#include <iostream>
#include <ctime>
#include <cstdlib>

size_t A,B;
size_t a,b;
const size_t WIDTH = 25;
const size_t HEIGTH = 50;
void matrix_lcnel (int[WIDTH][HEIGTH], size_t, size_t);

int main()
{
	srand (time(NULL));
	int matrix[WIDTH][HEIGTH] = {};
	matrix_lcnel (matrix, WIDTH, HEIGTH);

	std::cout << "Nermuceq kordinatner@ - " << std::endl;
	std::cout << "A - ";
	std::cin >> A;
	std::cout << "B - ";
	std::cin >> B;
	std::cout << "a - ";
	std::cin >> a;
	std::cout << "b - ";
	std::cin >> b;
	
	int little_matrix[a-A+1][b-B+1] = {0};

	for ( int i = A; i <= a; ++i )
	{
		for ( int j = B; j <= b; ++j )
		{
			little_matrix[i-A][j-B] = matrix[i][j];		
		}
	}

	for ( int i = 0; i < a-A+1; i++ )
	{
		std::cout << "|";
		for ( int j = 0; j < b-B+1; j++ )
		{
			std::cout << little_matrix[i][j];
		}
		std::cout << "|" << std::endl;
	}

	std::cout << std::endl;
	return 0;
}

void matrix_lcnel (int A[WIDTH][HEIGTH], size_t WIDTH, size_t HEIGTH)
{
	for ( int i = 0; i < WIDTH; i++ )
	{
		std::cout << "\t\t\t\t\t\t|";
		for ( int j = 0; j < HEIGTH; j++ )
		{
			A[i][j] = rand() % 2;
			std::cout << A[i][j];
		}
		std::cout << "|" << std::endl;
	}
}
