#include <iostream>

int main()
{
	int a;
	int b;
	int f;

	std::cout << "Введите числа a, b и f " << std::endl;
	std::cout << " a = ";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << " b = ";
	std::cin >> b;
	std::cout << std::endl;
	std::cout << " f = ";
	std::cin >> f;
	std::cout << std::endl;
		
	int x;
	x= ( a + b - f / a ) + f * a * a - ( a + b );
	std::cout << "Вычесляем по формуле - ( a + b - f / a ) + f * a * a - ( a + b ) " << std::endl;
	std::cout << " x = " << x << std::endl;

	return 0;
} 
