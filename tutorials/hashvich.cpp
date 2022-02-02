#include <iostream>
#include <string>
int main()
{
	int a;
	int b;
	int c;
	std::cout << "Введите числа" << std::endl;
	std::cin >> a >> b;
	std::cout << "Введите ответ" << std::endl;
	std::cin >> c;
	if ( a * b == c ){
		std::cout << "Ответ верный" << std::endl;
	}
	else {
		std::cout << "Ответ не верный" << std::endl;
		std::cout << "Правильный ответ - " << a * b << std::endl;
	}
	return 0;
}
