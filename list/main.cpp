#include <iostream>

#include "node.hpp"
#include "list.hpp"

int main ()
{
	list list;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_front(34);

	list.print();

	list.remove(3);

	list.print();
	
	list.reverse();
	
	list.print();

	return 0;
}
