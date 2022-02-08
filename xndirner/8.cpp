#include <iostream>

int main()
{
	double x;
	double y;
	
	std::cout << "Введите 1 число: ";
	std::cin >> x;
	std::cout << "Введите 2 число: ";
	std::cin >> y;
	
	if ( x > y )
	{	
		std::cout << "БОЛЬШЕ" << std::endl;
	}
	else if ( x < y )
	{
		std::cout << "МЕНЬШЕ" << std::endl;
	}
	else 
	{
		std::cout << "РАВНО" << std::endl;
	}

	return 0;
}
