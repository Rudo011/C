#include <iostream>

int main()
{
	int x;
	int masiv [10] = {2,6,7,1,5,3,0,4,9,8};

	for ( int i = 0; i < 10; i++)
	{
		std::cout << masiv [i] << "\t";
	}

	std::cout << std::endl;

	for ( int i = 0; i < 10; i++ )
	{
		for ( int j = i + 1; j < 10; j++ )
		{
			if ( masiv[j] < masiv [i] )
			{
				x = masiv[i];
				masiv[i] = masiv [j];
				masiv[j] = x;
			}
		}
	}

 	for ( int i = 0; i < 10; i++ )
	{
		std::cout << masiv[i] << "\t";
	}

	std::cout << std::endl;

	return 0;
}
