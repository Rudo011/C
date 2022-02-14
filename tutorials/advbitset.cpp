//tpel a tiv@, vortex popoxvac e b-erord bit@ ogtagorcelov bitayin gorcoxutyunner@

#include <iostream>
int main()
{
	int a;
	int b;
	int c;

	std::cin >> a;
	std::cin >> b;

	c= ( a | ( 1 << b - 1) );		
	std::cout << c << std::endl;
	return 0;
}
