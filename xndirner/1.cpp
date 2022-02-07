#include <iostream>

int main()
{
	std::cout << "Введите число - ";
	int a;
	std::cin >> a;
	std::cout << std::endl;

	if ( a < 9999 )
	{
		std::cout << "Введите пятизначное число" << std::endl;
	}
	else if ( a > 99999 )
	{
		std::cout << "Введите пятизначное число" << std::endl;
	}
	else 
	{
		std::cout << "1 цифра = " << a / 10000 << std::endl;
		std::cout << "2 цифра = " << ( a / 1000 ) % 10 << std::endl;
		std::cout << "3 цифра = " << ( a / 100 ) % 10 << std::endl;
		std::cout << "4 цифра = " << ( a / 10 ) % 10 << std::endl;
		std::cout << "5 цифра = " << a % 10 << std:: endl;
	}
	return 0;
}
