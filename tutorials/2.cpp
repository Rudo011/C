//stugum e vor tivn e bajanvum miayn ir vra

#include <iostream>
int main()
{
	int x;
	int y;
	std::cout << "nermuceq tiv" << std::endl;
	std::cin >> x;
	for ( y = 2 ; y <= x/2 ; y++)
	if (x%y == 0){
		std::cout << "prostoy tiv chi, bajanvuma  - " << y << std::endl;
		exit(0);
	}
	std::cout << "prostoy tiva" << std::endl;

return EXIT_SUCCESS;
}
