#include <iostream>

#include "node.hpp"
#include "list.hpp"

int main ()
{
	list list_1;
	list list_2;
	
	list_1.push_back(5);
	list_1.push_back(10);
	list_1.push_back(0);
	list_1.push_back(213);
	list_2.push_back(1);
	list_2.push_back(1);
	list_2.push_back(1);
	list_2.push_back(1);
	list_2.push_back(1);

	

	list_1.print();

	list_1.splice(10, list_2);

	list_1.print();
	
	

	return 0;
}
