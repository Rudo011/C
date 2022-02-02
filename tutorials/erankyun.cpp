#include <iostream>
int main()
{
	int x=0;
	std::cout << "Ներմուծեք եռա նկյա ն բա րձրությունը" << std::endl;
	std::cin >> x;
	for ( int i = 0; i < x; i++){
				
		for ( int j = 0; j < x - i; j++){
			std::cout << ' ';
		}	
		for ( int j = x - 2 * i; j <= x; j++){
			std::cout << '^';
		}
		std::cout << std::endl;
	}
	return 0;	
}
