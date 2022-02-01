#include <iostream>
using namespace std;
int calculate(int x, int y, char op)
{
	switch (op)
	{
		case '+':
			return x+y;
		case '-':
			return x-y;
		case '*':
			return x*y;
		case '/':
			return x/y;
		case '%':
			return x%y;
		default:
			std::cout<<"Символ не найден!";
			return 0;
	}
}

int main()
{
		cout<<"Введите первое число - ";
		int x;	
		cin>>x;

		cout<<"Введите второе число - ";
		int y;
		cin>>y;

		cout<<"Введите математический символ(+,-,*,/,%): ";
		char op;
		cin>>op;

		cout<<x<<" "<<op<<" "<<y<<" = " << calculate(x,y,op) <<"\n";

	return 0;
}
