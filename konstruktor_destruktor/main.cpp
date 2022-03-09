#include <iostream>
#include "vector.hpp"
#include "matrix.hpp"
#include <vector>

int main()
{
	srand (time(NULL));
	size_t size = 0;
	int epsilon = 0;
	std::cout << "Введите размер вектора: ";
	std::cin >> size;
	std::cout << std::endl;
	std::cout << "Введите отметку при которой распознается изменение цвета: ";
	std::cin >> epsilon;

	vector vec1_1(size);
	vector vec1_2(size);
	matrix mat_1(vec1_1, vec1_2);

	vector vec2_1(size);
	vector vec2_2(size);
	matrix mat_2(vec2_1, vec2_2);

	vector vec3_1(size);
	vector vec3_2(size);
	matrix mat_3(vec3_1, vec3_2);

	vector vec4_1(size);
	vector vec4_2(size);
	matrix mat_4(vec4_1, vec4_2);

	vector vec5_1(size);
	vector vec5_2(size);
	matrix mat_5(vec5_1, vec5_2);
		
	vector vec6_1(size);
	vector vec6_2(size);
	matrix mat_6(vec6_1, vec6_2);
	
	vector vec7_1(size);
	vector vec7_2(size);
	matrix mat_7(vec7_1, vec7_2);
	
	vector vec8_1(size);
	vector vec8_2(size);
	matrix mat_8(vec8_1, vec8_2);
	
	vector vec9_1(size);
	vector vec9_2(size);
	matrix mat_9(vec9_1, vec9_2);
	
	mat_1.rgb_lcnel(1 + rand() % 9);
	mat_2.rgb_lcnel(1 + rand() % 9);
	mat_3.rgb_lcnel(1 + rand() % 9);
	mat_4.rgb_lcnel(1 + rand() % 9);
	mat_5.rgb_lcnel(1 + rand() % 9);
	mat_6.rgb_lcnel(1 + rand() % 9);
	mat_7.rgb_lcnel(1 + rand() % 9);
	mat_8.rgb_lcnel(1 + rand() % 9);
	mat_9.rgb_lcnel(1 + rand() % 9);
	
	std::vector <matrix*> matrix_vector = {&mat_1, &mat_2, &mat_3, &mat_4, &mat_5, &mat_6, &mat_7, &mat_8, &mat_9};
	
	size_t size_for_big_matrix = size*3;
	matrix MATRIX(size_for_big_matrix);
	matrix NEW_MATRIX(size_for_big_matrix);

	MATRIX.merge(matrix_vector, size);
	MATRIX.average_rgb();
	MATRIX.print();
	MATRIX.compare(NEW_MATRIX, epsilon);
	
	NEW_MATRIX.print();

	


	return 0;
}
