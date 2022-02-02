//nerkayacnel 10akan hamkargi tiv@ erkuakan hamakargum

#include <iostream>

int main ()
{
	int i;
	int x;

	std::cout << "Nermuceq tiv: ";	
	std::cin >> x;
	std::cout << "Tiv@ erkuakan hamakargum: ";

	for (i = 31; i >= 0; i--) {
        
		if ((1 << i) & x) {
                
		std::cout << "1";
        	}
	else {
        
		std::cout << "0";
	}
	}

std::cout << std::endl;
return 0;
}
