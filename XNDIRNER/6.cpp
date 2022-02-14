#include <iostream>
#include <ctime>
#include <cstdlib>

struct Mat
{
	size_t WIDTH;
	size_t HEIGTH;
	int** data;
};

int main()
{


	return 0;
}

Mat create ( size_t WIDTH, size_t HEIGTH )
{
	int *matrix_1 = new size_t[WIDTH][HEIGTH];
	delete []matrix_1;
}
