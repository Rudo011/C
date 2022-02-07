#include <iostream>

int main()
{	
	double x;
	double y;
	std::cout << "Введите количество метров: ";
	std::cin >> x;
	std::cout << std::endl;
	y = x / 1000;
	std::cout << x << " метров = " << y << " километра" << std::endl;
	
	return 0;
}
