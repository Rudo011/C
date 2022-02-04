#include <iostream>
#include <cstdlib>
#include <ctime>

int masiv [5][5] =  {};

void fill()
{
	srand ( time ( NULL) );
	
	for ( int i = 0; i < 4; i++ )
	{
		for ( int p = 0; p < 4; p++ )
		{
			masiv[i][p] = 30 + rand() % 31;
		}
	}	


}

void max()
{
	for ( int i = 0; i < 4; i++ )
	{
		for ( int p = 0; p < 4; p++ )
		{
			std::max (masiv [i][p]);
		}
	}
} 


int main()
{
	fill();

	return 0;
}
