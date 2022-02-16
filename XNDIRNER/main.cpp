#include <iostream>
#include <ctime>
#include <cstdlib>
#include "6.hpp"

mat* create(size_t, size_t);
void print(mat*);
mat* sum(mat*, mat*);
void deleteMat(mat*);

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
	print (masiv1);
	std::cout << std::endl;
	mat* masiv2 = create(wight, heigth);

	print (masiv2);

	std::cout << std::endl << " Masivner@ gumarumic heto" << std::endl;

	mat* Gumar = sum(masiv1, masiv2);

	print (Gumar);

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

void print (mat* masiv1) {
	
	for ( int i = 0; i < masiv1->wight; ++i )
	{
		std::cout << "|";
		for ( int j = 0; j < masiv1->heigth; ++j )
		{
			std::cout << masiv1->data[i][j];
		}
		std::cout << "|" << std::endl;
	}
}

mat* sum (mat* masiv1, mat* masiv2)
{
	mat* result = create(masiv1->wight, masiv1->heigth);
	for ( int i = 0; i < masiv1->wight; ++i )
	{
		for ( int j = 0; j < masiv1->heigth; ++j )
		{
			result->data[i][j] = masiv1->data[i][j] | masiv2->data[i][j];
		}
	}
	return result;
}
