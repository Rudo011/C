//xndir tpel shorti, longi, inti, floati ev doublei minimal ev maximal arjeqner@

#include <iostream>
#include <limits>

template<typename T>
void showMinMax() {
	std::cout << "min: " << std::numeric_limits<T>::min() << std::endl;	
	std::cout << "max: " << std::numeric_limits<T>::max() << std::endl;
	std::cout << std::endl;
}

int main()
{
	int x;
	short y;
	long f;
	float t;
	double k;

	std::cout << "short:" << std::endl;
	showMinMax<short>();
	std::cout << "Количество байт = " << sizeof(y) << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
	std::cout << "int:" << std::endl;
	showMinMax<int>();
	std::cout << "Количество байт = " << sizeof(x) << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
	std::cout << "long:" << std::endl;
	showMinMax<long>();
	std::cout << "Количество байт = " << sizeof(f) << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
	std::cout << "float:" << std::endl;
	showMinMax<float>();
	std::cout << "Количество байт = " << sizeof(t) << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
	std::cout << "double:" << std::endl;	
	showMinMax<double>();
	std::cout << "Количество байт = " << sizeof(k) << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
	
	return 0;
}
