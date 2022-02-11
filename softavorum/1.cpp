#include <iostream>
#include <ctime>
#include <cstdlib>

const size_t WIDTH_I = 5;
const size_t HEIGTH_I = 10;

void random (unsigned int[WIDTH_I][HEIGTH_I], size_t, size_t);
void mijinEvTexadrum(unsigned int[WIDTH_I][HEIGTH_I], size_t, size_t);

int main()
{
	srand ( time ( NULL ) );

	unsigned int masiv[WIDTH_I][HEIGTH_I] = {0};
	random(masiv, WIDTH_I, HEIGTH_I);
	mijinEvTexadrum(masiv, WIDTH_I, HEIGTH_I);
}

void random (unsigned int A[WIDTH_I][HEIGTH_I], size_t WIDTH_I, size_t HEIGTH_I )
{
	for ( int i = 0; i < WIDTH_I; i++ )
	{
		std::cout << "| ";

		for ( int j = 0; j < HEIGTH_I; j++ )
		{
			unsigned int bit = 0;
			unsigned int b = rand() % 255;
			unsigned int c = rand() % 255;
			unsigned int d = rand() % 255;
			unsigned int e = rand() % 255;

			bit = bit | b;
			bit = bit << 8;
			bit = bit | c;
		        bit = bit << 8;
			bit = bit | d;
			bit = bit << 8;
			bit = bit | e;

			A[i][j] = bit;
			std::cout << A[i][j] << " ";
		}
		std::cout << " |" << std:: endl;
	}

}	

void mijinEvTexadrum  ( unsigned int AA[WIDTH_I][HEIGTH_I], size_t WIDTH_I, size_t HEIGTH_I )
{
	for ( int i = 0; i < WIDTH_I; i++ )
	{
		for ( int j = 0; j < HEIGTH_I; j++ )
		{
			unsigned int a,b,c,d,M;
		
			size_t mask = 255;
			a = AA[i][j] >> 24;
			b = AA[i][j] << 8;
			b = b >> 24;
			c = AA[i][j] << 16;
			c = c >> 24;
			d = AA[i][j] << 24;
			d = d >> 24; 			

			M = (a+b+c+d)/4;	
			std::cout << M;
			
			unsigned int K = 0;
		
			K = K | M;
			K = K << 8;
			K = K | M;
			K = K << 8;
			K = K | M;
			K = K << 8;
			K = K | M;
				
			AA [i][j] = K;
			std::cout << AA [i][j] << std::endl;
		}
	}
}

