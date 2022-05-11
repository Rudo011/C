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
	std::vector <matrix*> mat_vector;

	for ( int i = 0; i < amount; ++i )
	{
		vector vec_1(size);
		vector vec_2(size);
		matrix *p = new matrix(vec_1, vec_2);
		p->rgb_lcnel(1 + rand() % 9);
		mat_vector.push_back(p);
	}

	size_t size_for_big_matrix = size*sqrt(amount);
	matrix MATRIX(size_for_big_matrix);
	matrix NEW_MATRIX(size_for_big_matrix);
	MATRIX.merge(mat_vector);
	MATRIX.average_rgb();
	MATRIX.print();
	MATRIX.compare(NEW_MATRIX, epsilon);
	NEW_MATRIX.print();

	del(mat_vector);

	return 0;
}
