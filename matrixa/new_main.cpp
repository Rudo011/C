#include <iostream>
#include "mat.hpp"
#include "vector.hpp"

int main()
{
	srand (time(NULL));

	size_t size = 0;
	std::cout << "Введите размер матрицы - ";
	std::cin >> size;
	
	vector* vec1_1 = create(size);
        vector* vec1_2 = create(size);
        mat* mult_1 = multi(vec1_1, vec1_2);    

        vector* vec2_1 = create(size);
        vector* vec2_2 = create(size);
        mat* mult_2 = multi(vec2_1, vec2_2);

        vector* vec3_1 = create(size);
        vector* vec3_2 = create(size);
        mat* mult_3 = multi(vec3_1, vec3_2); 

        vector* vec4_1 = create(size);
        vector* vec4_2 = create(size);
        mat* mult_4 = multi(vec4_1, vec4_2);

        vector* vec5_1 = create(size);
        vector* vec5_2 = create(size);
        mat* mult_5 = multi(vec5_1, vec5_2);

        vector* vec6_1 = create(size);
        vector* vec6_2 = create(size);
        mat* mult_6 = multi(vec6_1, vec6_2);

        vector* vec7_1 = create(size);
        vector* vec7_2 = create(size);
        mat* mult_7 = multi(vec7_1, vec7_2);
    
        vector* vec8_1 = create(size);
        vector* vec8_2 = create(size);
        mat* mult_8 = multi(vec8_1, vec8_2);

        vector* vec9_1 = create(size);
        vector* vec9_2 = create(size);
        mat* mult_9 = multi(vec9_1, vec9_2);

	rbg_lcnel (mult_1, 1 + rand() % 9);
	rbg_lcnel (mult_2, 1 + rand() % 9);
	rbg_lcnel (mult_3, 1 + rand() % 9);
	rbg_lcnel (mult_4, 1 + rand() % 9);
	rbg_lcnel (mult_5, 1 + rand() % 9);
	rbg_lcnel (mult_6, 1 + rand() % 9);
	rbg_lcnel (mult_7, 1 + rand() % 9);
	rbg_lcnel (mult_8, 1 + rand() % 9);
	rbg_lcnel (mult_9, 1 + rand() % 9);
	
	

	delete_vector (vec1_1);
        delete_vector (vec1_2);
        delete_vector (vec2_1);
        delete_vector (vec2_2);
        delete_vector (vec3_1);
        delete_vector (vec3_2);
        delete_vector (vec4_1);
        delete_vector (vec4_2);
        delete_vector (vec5_1);
        delete_vector (vec5_2);
        delete_vector (vec6_1);
        delete_vector (vec6_2);
        delete_vector (vec7_1);
        delete_vector (vec7_2);
        delete_vector (vec8_1);
        delete_vector (vec8_2);
        delete_vector (vec9_1);
        delete_vector (vec9_2);

        delete_matrix (mult_1);
        delete_matrix (mult_2);
        delete_matrix (mult_3);
        delete_matrix (mult_4);
        delete_matrix (mult_5);
        delete_matrix (mult_6);
        delete_matrix (mult_7);
        delete_matrix (mult_8);
        delete_matrix (mult_9);

	return 0;
}
