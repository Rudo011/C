#include <iostream>

#include "deque_imp.hpp"

int main()
{
	deque<int> d1 = 10;

	d1.push_back(10);
	std::cout << d1.end() << std::endl;
	d1[6] = 100;
	

	std::cout << d1.size() << std::endl;

	d1.print();
	

	return 0;
}
