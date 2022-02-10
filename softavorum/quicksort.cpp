#include <iostream>
#include <ctime>
#include <cstdlib>

const int n = 100;
int first;
int last;

void quicksort ( int *mas, int first, int last )
{
	int mid;
	int count;
	int f = first;
	int l = last;
	mid = mas [ ( f + l ) / 2 ];
	
	do 
	{
		while ( mas[f] < mid )
		f++;
		while ( mas[l] > mid )
		l--;

		if ( f <= l )
		{
			count = mas[f];
			mas[f] = mas[l];
			mas[l] = count;
			f++;
			l--;
		}
	}

	while ( f < l );
	if ( first < l )
	quicksort ( mas, first, l );
	if ( f < last )
	quicksort ( mas, f, last );
}
int main()
{
	int *A = new int[n];
	srand ( time ( NULL ) );
	std::cout << "Skzbnakan masiv: ";
	for ( int i = 0; i < n; i++ )
	{
		A[i] = rand() % 1000;
		std::cout << A[i] << " ";
	}
	first = 0;
	last = n - 1;
	quicksort ( A, first, last );
	std::cout << std::endl << "Verjnakan masiv: ";
	for ( int i = 0; i < n; i++ )
	{
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
	delete []A;
	
	return 0;
}
