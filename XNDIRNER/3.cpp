#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	srand ( time ( NULL ) );
	unsigned int a = 0;
	unsigned int b = rand() % 255;
	std::cout << b << " ";
	unsigned int c = rand() % 255;
	std::cout << c << " ";
	unsigned int d = rand() % 255;
	std::cout << d << " ";
	unsigned int e = rand() % 255;
	std::cout << e << " " << std::endl;

	a = a | b;
	a = a << 8;
	a = a | c;
	a = a << 8;
	a = a | d;
	a = a << 8;
	a = a | e;
	
	std::cout << "32 bit tiv@ = " << a << std::endl;
	
	unsigned int f,g,h,i;
	f = a >> 24;
	g = a << 8;
	g = g >> 24;
	h = a << 16;
	h = h >> 24;
	i = a << 24;
	i = i >> 24;

	std::cout << "1 = " << f << std::endl;
	std::cout << "2 = " << g << std::endl;
	std::cout << "3 = " << h << std::endl;
	std::cout << "4 = " << i << std::endl;

	unsigned int M = (f+g+h+i)/4;

	std::cout << std::endl;
	std::cout << "M = " << M << std::endl;	

	return 0;
}
