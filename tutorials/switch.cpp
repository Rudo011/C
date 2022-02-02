#include <iostream>
int calculate(int x, int y, char op)
{
	switch (op){

		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		case '%':
			return x % y;
		default:
			std::cout<<"Символ не найден!";
			return 0;
	}
}

int main()
{
	std::cout << "Введите первое число - ";
	int x;	
	std::cin >> x;
	std::cout << "Введите второе число - ";
	int y;
	std::cin >> y;
	std::cout << "Введите математический символ(+,-,*,/,%): ";
	char op;
	std::cin >> op;
	std::cout << x << " " << op << " " << y << " = " << calculate( x, y, op ) << "\n";

	return 0;
}
