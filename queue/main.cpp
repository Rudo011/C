#include <iostream>

#include "queue_imp.hpp"

int main()
{
	queue<int> q1;
	q1.push(5);
	q1.push(10);
	q1.push(15);
	q1.push(20);

	q1.print();

	q1.pop();
	q1.pop();
	q1.pop();
	
	q1.pop();
	q1.pop();
	
	q1.print();
	std::cout << q1.size() << std::endl;
	std::cout << q1.front() << " " << q1.back() << std::endl;	


	return 0;
}
