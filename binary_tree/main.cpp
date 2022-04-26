#include <iostream>

#include "tree_imp.hpp"
#include "node_imp.hpp"

int main()
{
	tree<int> t1;

	t1.insert(21);
	t1.insert(22);
	t1.insert(3);
	t1.insert(28);
	t1.insert(10);
	t1.insert(6);
	t1.remove(22);

	t1.getBalance();	

	t1.print();

	
	



	return 0;
}
