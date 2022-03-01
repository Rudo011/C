#include <iostream>
#include <fstream>
#include <string>


int main()
{
	std::string a;

	std::ifstream in("/home/rudolf/Downloads/russian_surnames.txt");
	if (in.is_open())
	{
		while (getline(in,a))
		{
			std::cout << a << std::endl;
		}
	}
	in.close();	

	std::cout << "End of program" << std::endl;

	return 0;
}
