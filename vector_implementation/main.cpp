#include <iostream>
#include "vector.cpp"

int main()
{
	vector <int> v1;
	vector <int> v2;
	
	v1.push_back(5);
	v1.push_back(10);
	v1.push_back(15);
	v1.push_back(20);
	v1.push_back(25);

	
	v1.print();
	std::cout << v1.size() << std::endl;
	std::cout << v1.max_size() << std::endl;


	
	return 0;
}
