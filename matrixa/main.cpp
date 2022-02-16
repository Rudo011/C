#include <iostream>

#include "mat.hpp"
#include "vector.hpp"


int main()
{
/*	size_t wight = 0;
	size_t heigth = 0;
	std::cout << "Введите размер матриц." << std::endl;
	std::cout << "Количество строк = ";
	std::cin >> wight;
	std::cout << "Количество столбец = ";
	std::cin >> heigth;

	std::cout << "Матрицы до работы с ними" << std::endl;
	mat* masiv1 = create(wight, heigth);
	print (masiv1);
	std::cout << std::endl;
	mat* masiv2 = create(wight, heigth);
	print (masiv2);
	std::cout << "Матрицы после использования оператора ИЛИ (|) " << std::endl;
	mat* result = sum(masiv1, masiv2);
	print (result);

	deleting (masiv1);
	deleting (masiv2);
	deleting (result);
*/
	size_t size = 0;
	std::cout << "Введите размер вектора -  ";
	std::cin >> size;

	vector* vec1 = create(size);
	print (vec1);
	vector* vec2 = create(size);
	print (vec2);
	mat* mult = multi(vec1, vec2);	
	print (mult);

	delete_vector (vec1);
	delete_vector (vec2);
	delete_matrix (mult);
	
	return 0;
}	
