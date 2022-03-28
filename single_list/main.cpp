#include <iostream>

#include "node.hpp"
#include "list.hpp"

int main ()
{
	list list_1;
	list list_2;

	list_1.push_back(5);
	list_1.push_back(10);

	list_2.push_back(15);
	list_2.push_back(20);

	list_2.insert(list_2.find(15), 17);
	list_2.print();

	return 0;
}
