#include <iostream>
#include <cstdlib>

int sum = 0;
int sim = 0;
int tmp = 0;
int reverse(int);
int symbol_sum(int);
void perebor(size_t);
void A_B(int, int);
int akkerman(size_t, size_t);
int dou(double);
int sum_number(int);


class A
{ 
	public:
		long long unsigned int m_count;
	public:	
		A()
			:m_count(0)
		{
		}
		
		~A()
		{
			std::cout << m_count << std::endl;
		}
	
		A& operator++()
		{
			++m_count;
			return *this;
		}
};


A count;

int main()
{
	size_t x = 0;
	size_t y = 0;
	std::cin >> x;
	std::cin >> y;
	
	int t = akkerman(x,y);
	
	std::cout << t << std::endl;

	
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

void perebor(size_t x)
{
	if (x == 1)
	{
		std::cout << x << std::endl;
		return;
	}
	
	std::cout << x  << " ";
	perebor(x-1);
	
}

void A_B(int x, int y)
{
	if (x > y)
	{
		if (x == y)
		{
			std::cout << y << std::endl;
			return;
		}
		std::cout << y << " ";
		A_B(x, y+1);
	}
	else
	{
		if (x == y)
		{
 			std::cout << x << std::endl;
			return;
		}
		std::cout << y << " ";
		A_B(x, y-1);
	}
}
int akkerman(size_t x, size_t y)
{
	++count;
	if (x == 0)
	{
		return y+1;
	}
	else if (y == 0 && x > 0)
	{
		return akkerman(x-1,1);
	}
	else
	{
		return akkerman(x - 1, akkerman(x, y-1));
	}
}

int dou(double x)
{
	if (x == 1)
	{
		return true;
	}
	else if (x > 1 && x < 2)
	{
		return false;
	}
	else 
	{
		return dou(x/2);
	}
}

int sum_number(int x)
{
	if (x < 10)
	{
		return x;
	}
	else 
	{
		return x % 10 + sum_number(x / 10);
	}
}
