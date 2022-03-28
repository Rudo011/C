#include <iostream>

#include "node.hpp"
#include "list.hpp"

int main()
{
	list list_1;
	list list_2;
	
	list_1.insert(list_1.find(0), 5);
	list_1.insert(list_1.find(5), 10);
	list_1.push_front(0);
	list_1.push_back(15);
	list_1.push_front(-5);
	list_1.print();
	
	list_2.push_back(20);
	list_2.push_back(25);
	list_2.push_back(30);
	list_2.push_back(35);
	list_2.push_back(40);
	list_2.print();

	list_1.splice(list_1.find(5), list_2);
	list_1.print();
	list_1.reverse();
	list_1.print();

	std::cout << std::endl;
	std::cout<<list_1.front()->m_data<<" - "<< list_1.back()->m_data << "  size - " <<list_1.size() << std::endl;	
	


	return 0;
}
