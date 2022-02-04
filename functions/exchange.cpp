#include <iostream>

void exchange ( double currate, double sum ) 
{
	double result = sum / currate;
	std::cout << "Rate: " << currate << "\tSum: " << sum 
		  << "\tResult: " << result <<std::endl;
}

int main()
{
	double sum;
	double currate = 59;
	std::cout << "Введите сумму" << std::endl;
	std::cin >> sum;
	exchange ( currate, sum );
	return 0;
}
