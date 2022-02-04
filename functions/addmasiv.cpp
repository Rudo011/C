#include <iostream>

int first [5];
int second [7];

void installer ( int first [5], int second [7] )
{
	for ( int i=0; i < 5; i++ ) 
	{
		std::cout << "first " << i << " = ";
		std::cin >> first [i];
	}
	for ( int i=0; i < 7; i++ )
	{
		std::cout << "second " << i << " = ";
		std::cin >> second [i];
	}
}

int main()
{
	int min;
	int max;
	installer ( first, second );
	std::cout << "first = ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "[" << first [i] << "]";
	}
	std::cout << std::endl;
	std::cout << "second = ";
	for ( int i = 0; i < 7; i++ )
	{
		std::cout << "[" << second [i] << "]";
	}
	std::cout << std::endl;

	max=min=first[0];
	for ( int i=1; i<5; i++)
	{
		if (max<first[i]) max=first[i];
		if (min>first[i]) min=first[i];
	}
	std::cout << "max = " << max << std::endl;
	std::cout << "min = " << min << std::endl;
	return 0;
}
