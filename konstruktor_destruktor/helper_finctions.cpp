#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>

#include "vector.hpp"
#include "matrix.hpp"
#include "helper.hpp"


void test (size_t amount)
{
	if (sqrt(amount) - (int)sqrt(amount) != 0)
	{
		std::cout << "Количество матриц не коректна. " << std::endl;
		std::cout << "Попробуйте еще раз (введите число с чистым корнем). " << std::endl;
		exit(0);
	}
}

void del (const std::vector<matrix*> & p)
{
	std::vector<matrix*>::const_iterator k;

	for ( k = p.begin(); k < p.end(); k++ )
	{
		delete *k;
	}
}
