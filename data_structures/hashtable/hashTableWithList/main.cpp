#include "hash.hpp"

int main()
{
	hash<unsigned long long int, std::string> A;
	A.load();	

	int c = 0;
	unsigned long long int number = 0;
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
		if (wrongChoice(c))
		{
			std::cout << "Select correct choice" << std::endl;
			break;
		}
		std::cout << std::endl;

		switch(c)
		{
			case 1:
			{
				std::cout << "Enter phone number:";
				std::cin >> number;
				if (std::cin.fail() || wrongNum(number))
				{
					std::cout << "Please enter correct number:" << std::endl;
					std::cin.clear();
					std::cin.ignore(32767, '\n');
					break;
				}
				std::cout << "Enter name and surname:";
				std::getline(std::cin >> std::ws, name);
				A.insert(number, name);
	
				break;
			}
			case 2:
			{
				std::cout << "Enter phone number:";
				std::cin >> number;
				std::cout << std::endl;
				if (std::cin.fail() || wrongNum(number))
				{
					std::cout << "Please enter correct number:" << std::endl;
					std::cin.clear();
					std::cin.ignore(32767, '\n');
					break;
				}
				A.search(number);

				break;
			}
			case 3:
			{
				std::cout << "Enter phone number:";
				std::cin >> number;
				std::cout << std::endl;
				if (std::cin.fail() || wrongNum(number))
				{
					std::cout << "Please enter correct number:" << std::endl;
					std::cin.clear();
					std::cin.ignore(32767, '\n');
					break;
				}
				A.remove(number);
				std::cout << "Successful!" << std::endl;
				break;
			}
			case 4:
			{
				A.save();			
				return 0;
			}
			default:
			{
				std::cout << "Please enter correct option:" << std::endl;
			}
		}
	}
	

	return 0;
}
