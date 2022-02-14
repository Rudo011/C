#include <iostream>
 
int add(int x, int y); // это нужно для того, чтобы main.cpp знал, что функция add() определена в другом месте
 
int main()
{
	int x; 
	int y;
	std::cout << "Введите число" << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << std::endl;
	std::cout << "y = ";
	std::cin >> y;	
	std::cout << std::endl;
	std::cout << "x * y = " << add( x, y ) << std::endl;
	return 0;
}
