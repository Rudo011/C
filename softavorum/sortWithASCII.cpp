#include <iostream>
#include <string.h>
#include <stdio.h>

int main()
{
	char str[5][20], t[20];

	for ( int i = 0; i < 5; i++ )
	{		
		std::cout << i << ") ";
		std::cin >> str[i];	
	}
	
	for ( int i = 1; i < 5; i++ )
	{
		for ( int j = 1; j < 5; j++ )
		{
			if ( strcmp ( str[ j -1 ], str[j] ) > 0 )
			{
				strcpy ( t, str[ j -1 ] );
				strcpy ( str[ j - 1], str[j]);
				strcpy ( str[j], t );
			}
		}
	}

	for ( int i = 0; i < 5; i++ )
	{
		std::cout << " ";
		std::cout << str[i] << "\n";
	}
	
	return 0;
}
