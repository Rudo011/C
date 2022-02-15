#include <iostream>
#include <ctime>
#include <cstdlib>
#include "6.hpp"

mat* create(size_t, size_t);
void print (mat*, size_t, size_t);

int main()
{
	size_t wight = 0;
	size_t heigth = 0;
	std::cout << "Nermuceq chapser@" << std::endl;
	std::cout << "Wight = ";
	std::cin >> wight;
	std::cout << "Highth = ";
	std::cin >> heigth;

	mat* zero = create(wight, heigth);
	print (zero, wight, heigth);	

	for (int i = 0; i < wight; ++i) 
	{
		delete []zero->data[i];
	}
	delete []zero->data;
	delete zero;
	return 0;
}

mat* create(size_t wight, size_t heigth)
{	
	int** data = new int*[wight];

	for (int i =0; i < wight; ++i) 
	{
		data[i] = new int[heigth];
	}
	
	for ( int i = 0; i < wight; ++i )
	{
		for ( int j = 0; j < heigth; ++j )
		{
			data[i][j] = rand() % 2;
		}
	}

	mat* m = new mat;
	m->wight = wight;
	m->heigth = heigth;
	m->data = data;
	return m;
}	

void print (mat* zero, size_t wight, size_t heigth)
{
	for ( int i = 0; i < wight; ++i )
	{
		std::cout << "|";
		for ( int j = 0; j < heigth; ++j )
		{
			std::cout << data[i][j];
		}
		std::cout << "|" << std::endl;
	}
}
