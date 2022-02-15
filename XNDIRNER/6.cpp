#include <iostream>
#include <ctime>
#include <cstdlib>
#include "6.hpp"

mat* create(size_t, size_t);

int main()
{
	size_t wight = 0;
	size_t heigth = 0;
	std::cout << "Nermuceq 1 matricai chapser@" << std::endl;
	std::cout << "Wight = ";
	std::cin >> wight;
	std::cout << "Highth = ";
	std::cin >> heigth;

	mat* masiv1 = create(wight, heigth);
	
	std::cout << "Masivner@ gumarumic araj" << std::endl;
	
	mat* masiv2 = create(wight, heigth);

	std::cout << std::endl << " Masivner@ gumarumic heto" << std::endl;

	for ( int i = 0; i < wight; ++i )
	{
		std::cout << "|";
		for ( int j = 0; j < heigth; ++j )
		{
			masiv1->data[i][j] = masiv1->data[i][j] + masiv2->data[i][j];
			std::cout << masiv1->data[i][j];
		}
		std::cout << "|" << std::endl;
	}	


	for (int i = 0; i < wight; ++i) 
	{
		delete []masiv1->data[i];
	}
	delete []masiv1->data;
	delete masiv1;

	for (int i = 0; i < wight; ++i)
	{
		delete []masiv2->data[i];
	}
	delete []masiv2->data;
	delete masiv2;

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
		std::cout << "|";
		for ( int j = 0; j < heigth; ++j )
		{
			data[i][j] = rand() % 2;
			std::cout << data[i][j];
		}
		std::cout << "|" << std::endl;
	}

	mat* m = new mat;
	m->wight = wight;
	m->heigth = heigth;
	m->data = data;
	return m;
}
