#include <iostream>
 
int main()
{
	int x = 0; 
	char exit = 'a'; 
 	for (;;){
 		std::cout << "Введите число: ";
 		std::cin >> x;
		std::cout << "Квадрат " << x << " = " << x * x;
		std::cout << "\nПродолжить ввод чисел - A, Выйти  - Любая кнопка: ";
	        std::cin >> exit; 

		if ( exit != 'a' && exit != 'a')
		break;
	} 
	return 0;
}
