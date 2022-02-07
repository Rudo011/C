#include <iostream>

int main()
{
	int house [][10] = { 	{0,0,0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0,0,0},
				{0,0,0,0,1,2,0,0,0,0},
				{0,0,0,1,0,0,2,0,0,0},
				{0,0,1,0,0,0,0,2,0,0},
				{0,1,3,3,3,3,3,3,2,0},
				{1,4,0,0,0,0,0,0,4,2},
				{0,4,0,0,0,0,0,0,4,0},
				{0,4,0,0,0,0,0,0,4,0},
				{0,4,5,5,5,5,5,5,4,0},
			  };
	char symbol [6] = {' ', '/', char(92), '-', '|', '_'};
	
	for ( int i = 0; i < 10; i++ )
	{
		for ( int j = 0; j < 10; j++ )
		{
			switch ( house [i][j] )
			{
				case 0:
				std::cout << symbol [0];
				continue;

				case 1:
				std::cout << symbol [1];
				continue;

				case 2:
				std::cout << symbol [2];
				continue;

				case 3:
				std::cout << symbol [3];
				continue;

				case 4:
				std::cout << symbol [4];
				continue;

				case 5:
				std::cout << symbol [5];
				continue;
			}
		}
	std::cout << std::endl;
	}
	
	return 0;
}
