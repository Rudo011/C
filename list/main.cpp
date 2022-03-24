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
	list_1.splice(list_1.find(5), list_2);
	list_1.print();
	list_2.print();
	list_2.splice(list_2.begin(), list_1);
	list_1.print();
	list_2.print();
	
	list_1.sort();
	list_2.sort();
	
	list_2.print();


	return 0;
}
