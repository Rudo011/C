#include <iostream>

int sum = 0;
int sim = 0;
int tmp = 0;
int reverse(int);
int symbol_sum(int);

int main()
{
	int x = 0;
	std::cin >> x;

	std::cout << reverse(x) << std::endl;
	std::cout << symbol_sum(x) << std::endl;
	
	return 0;
}

int reverse(int x)
{
	
	if (x)
	{
		tmp = x%10;
		sum = sum * 10 + tmp;
		reverse(x / 10);
	}
	return sum;
}
	
int symbol_sum(int x)
{
	if (x == 0)
	{
		return sim;
	}
	
	sim++;
		
	return symbol_sum(x / 10);  
}
