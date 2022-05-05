#include <iostream>

#include "tree_imp.hpp"
#include "node_imp.hpp"

int main()
{
	tree<int> t1;
	
	size_t k = 1000000;

	for (int i = 1; i < k ; ++i)
	{
		t1.insert(i);
	}

	t1.print();

	for (int i = 500000; i > 0; --i)
	{
		t1.remove(i);
	}
		
	for (int i = 1; i < 600000; ++i)
	{
		t1.insert(i);
	}

	std::cout << "____________________________________" << std::endl;

	t1.print();
	
	return 0;
}
