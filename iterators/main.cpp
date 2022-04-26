#include <iostream>
#include <iterator>
#include <vector>

int main()
{
	std::vector<int> v1 = {1, 2, 3, 4, 5};

	std::vector<int>::iterator ptr;

	for (ptr = v1.begin(); ptr < v1.end(); ptr++)
	{
		std::cout << *ptr << " ";
	}
	std::cout << std::endl;

	return 0;
}
