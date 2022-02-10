#include <iostream>
#include <cmath>
int main()
{	
	int x;
	int y;
	int i;
	std::cout << "nermuceq tiv  ";
	std::cin >> x;
	for ( i=31; i>=0; i-- ) {
	
		if ( ( 1 << i ) & x ) {
	 
			std::cout << "1";
		} 
	else {
	 
		std::cout << "0";
	}
	}

	std::cout << std::endl;
	return 0;
}
