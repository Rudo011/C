#include <iostream>
#include <cstdlib>
#include <ctime>

const int SIZE = 5;

void fillandShow ( int [] [SIZE], const int SIZE);
int min ( int [] [SIZE], const int SIZE);
int max ( int [] [SIZE], const int SIZE);

int main()
{
	int masiv [SIZE][SIZE] = {};

	fillandShow ( masiv, SIZE );
	
	std::cout << std::endl;
	std::cout << "MAX = " << max(masiv, SIZE) << std::endl;
	std::cout << "MIN = " << min(masiv, SIZE) << std::endl;

	return 0;
}

void fillandShow ( int arr [] [SIZE], const int size ) 
{
	for ( int i = 0; i < size; i++ )
	{
		std::cout << "| ";
		
		for ( int j = 0; j < size; j++ )
		{
			arr [i] [j] = 30 + rand() % 31;
			std::cout << arr[i][j] << " ";
		}
		std::cout << " |" << std:: endl;
	}
}

int min ( int arr [][SIZE], const int size)
{
	int min = arr[0][0];
	for ( int i = 0; i < size; i++ )
	{
		for ( int j = 0; j < size; j++ )
		{
			if ( arr[i][j] < min )
			min = arr[i][j];
		}
	}
	return min;
}

int max ( int arr [][SIZE], const int size)
{
	int max = arr [0][0];
	for ( int i = 0; i < size; i++ )
	{
		for ( int j = 0; j < size; j++)
		{
			if ( arr[i][j] > max )
			max = arr [i][j];
		}
	}
	return max;
}
