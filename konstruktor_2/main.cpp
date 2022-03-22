#include <iostream>
#include <vector>
#include <cmath>

#include "vector.hpp"
#include "matrix.hpp"
#include "helper.hpp"

int main(int argc, char** argv)
{
	test(argc, argv);
        size_t size = std::atoi(argv[1]);
        size_t amount = std::atoi(argv[2]);
        int epsilon = std::atoi(argv[3]);

	srand (time(NULL));
	std::vector <matrix> mv;
	for ( int i = 0; i < amount; ++i )
	{
		mv.emplace_back(size);
		mv.back().rgb_lcnel(1 + rand() % 9);
		mv.back().average_rgb();
		mv.back().print_B();
	}
	
	
	size_t size_for_big_matrix = size*sqrt(amount);
	matrix MATRIX(size_for_big_matrix);
	MATRIX.merge(mv);
	MATRIX.print_B();

	return 0;
}
