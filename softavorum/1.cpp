#include <iostream>
#include <ctime>
#include <cstdlib>

int fillAnd()
{
	srand ( time ( NULL ) );

	int i = 0;
	int b = rand() % 255;
	int c = rand() % 255;
	int d = rand() % 255;
	int e = rand() % 255;

	i = i | b;
	i = i << 8;
	i = i | c;
	i = i << 8;
	i = i | d;
	i = i << 8;
	i = i | e;

	std::cout << i << std::endl;

	return 0;
}

int main()
{
	fillAnd();

	return 0;
}
