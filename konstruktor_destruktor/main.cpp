#include <iostream>
#include <vector>
#include <cmath>

#include "vector.hpp"
#include "matrix.hpp"
#include "helper.hpp"

int main()
{
	srand (time(NULL));
	size_t size = 0;
	int epsilon = 0;
	size_t amount = 0;
	std::cout << "Введите размер вектора: ";
	std::cin >> size;
	std::cout << std::endl;
	std::cout << "Введите количество матриц: ";
	std::cin >> amount;
	std::cout << std::endl;
	std::cout << "Введите отметку при которой распознается изменение цвета: ";
	std::cin >> epsilon;

	test(amount);

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
