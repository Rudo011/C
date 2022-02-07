#include <iostream>

int main()
{
	char letter('a');
	std::cout << "Введите букву в нижнем регистре" << std::endl;
	std::cout << "Letter - ";
	std::cin >> letter;
	
	letter =  letter - 32;
	std::cout << "Эта буква в верхнем регистре будет - " << letter << std::endl;
	
	return 0;
}
