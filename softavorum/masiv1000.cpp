#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	srand ( time ( NULL ) );
	
	int x;
	int masiv [1000] = {};

	for ( int i = 0; i < 1000; i++)
	{
		masiv[i] = rand() % 10000;
	}

	for ( int i = 0; i < 1000; i++ )
	{
		std::cout << "|" << masiv [i] << "|" << std::endl;
	}

	for ( int i = 0; i < 1000; i++ )
	{
		for ( int j = i + 1; j < 1000; j++ )
		{
			if ( masiv[j] < masiv[i] )
			{
				x = masiv[i];
				masiv[i] = masiv[j];
				masiv[j] = x;
			}
		}
	}
		
	for ( int i = 0; i < 1000; i++ )
	{
		std::cout << masiv[i] << std::endl;
	}
	return 0;
}
