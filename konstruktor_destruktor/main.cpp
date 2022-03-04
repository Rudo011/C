#include <iostream>
#include "vector.hpp"

int main()
{
	size_t size = 0;
	int alfa = 0;
	std::cout << "Введите размер вектора: ";
	std::cin >> size;
	std::cout << std::endl;
	std::cout << "Введите отметку прт которой распознается изменение цвета: ";
	std::cin >> alfa;
	
	vector vec1_1(size);


	return 0;
}
