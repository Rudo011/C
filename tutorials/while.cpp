#include <iostream>
int main()
{
	int mutqanak = 0;
	double ambgumar = 0;
	double tiv = 0;
	std::cout << "Введите числа для расчета." << std::endl << "(чтобы выйти нажмите 0)" << std::endl;

	do {
		std::cout << "Число "<< mutqanak + 1 << " = ";
		std::cin >> tiv;
		
		if ( tiv ) {
			mutqanak++;
			ambgumar += tiv;
		}
	}

	while ( tiv );
		
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Количество введенных чисел: " << mutqanak << std::endl;
	std::cout << "Общая сумма: " << ambgumar << std::endl;
	std::cout << "Среднее арифметическое: " << ambgumar / mutqanak << std::endl;

	return 0;
}
