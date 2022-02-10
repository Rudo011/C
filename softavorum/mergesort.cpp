#include <iostream>
	
void Merge(int *A, int first, int last)
{
	int middle, start, final, j;
	middle = (first + last) / 2;
	start = first;
	final = middle + 1;
	int *mas = new int[last - first + 1];
	for (j = first; j <= last; j++)
	if ((start<=middle) && ((final>last) || (A[start]<A[final])))
	{
		mas[j - first] = A[start];
		start++;
	}

	else
	{
		mas[j - first] = A[final];
		final++;
	}

	for ( j = first; j <= last; j++ ) 
	A[j] = mas[j - first];
	delete[]mas;
};

void MergeSort(int *A, int first, int last)
{
	if (first < last)
	{
		MergeSort(A, first, (first + last) / 2);
		MergeSort(A, (first + last) / 2 + 1, last);
		Merge(A, first, last);
}
}

int main()
{
	int i;
	int n;
	int *A = new int[100];
	std::cout << "Masivi chap@ > ";
	std::cin >> n;

	for ( i =1; i <=n; i++ )
	{
		std::cout << i << " element > ";
		std::cin >> A[i];
	}
	MergeSort ( A, 1, n );
	std::cout << "Dasavorvac masiv: ";
	
	for ( i = 1; i <= n; i++ )
	{
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
	delete []A;

	return 0;
}


