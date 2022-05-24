#include "hash_table_imp.hpp"
#include <string>
#include <iostream>

int main()
{
	hash_table A;
	
	unsigned long long int number = 0;
	int c = 0;
	std::string name;

	while(1)
	{
		std::cout << std::endl;
		std::cout << "1. Insert" << std::endl;
		std::cout << "2. Search" << std::endl;
		std::cout << "3. Delete" << std::endl;
		std::cout << "4. Exit" << std::endl;
		std::cout << "Enter your choice:";
		
		std::cin >> c;
		std::cout << std::endl;

		switch(c)
		{
			case 1:
				std::cout << "Enter phone number:";
				std::cin >> number;
				if (wrongNum(number))
				{
					std::cout << "Please enter correct number:" << std::endl;
					break;
				}
				std::cout << "Enter name and surname:";
				std::getline(std::cin >> std::ws, name);	
				A.insert(number, name);
			
				break;
			case 2:
				std::cout << "Enter phone number:";
				std::cin >> number;
				if (wrongNum(number))
				{
					std::cout << "Please enter correct number:" << std::endl;
					break;
				}
				A.search(number);
			
				break;
			case 3:
				std::cout << "Enter phone number:";
				std::cin >> number;
				if (wrongNum(number))
				{
					std::cout << "Please enter correct number:" << std::endl;
					break;
				}
				A.remove(number);
				break;
			case 4:
				return 0;
			default:
				std::cout << "Please enter correct option:" << std::endl;
		}
	}

	return 0;
}
