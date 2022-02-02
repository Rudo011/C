#include <iostream>
int main()
{ 
	int numberDay;
	std::cout << "Введите день недели - ";
	std::cin >> numberDay;
	
	switch ( numberDay ) {
	
		case 1:
		std::cout << "9:00-12:20 - коледж, 13:00-18:30 - занятия" << std::endl;
		break;

		case 2:
		std::cout << "9:00-12:20 - коледж, 12:30-13:30 - VTB, 14:00-19:00 - занятия" << std::endl;
		break;

		case 3:
		std::cout << "10:05-13:30 - коледж, 14:00-19:00 - занятия, 20:00 - кино" << std::endl;
		break;

		case 4:
		std::cout << "9:00-12:20 - коледж, 13:00-18:30 - занятия" << std::endl;
		break;

		case 5:
		std::cout << "9:00-12:20 - коледж, 13:00-18:00 - занятия, 18:30-22:30 - Степанаван" << std::endl;
		break;

		case 6:
		std::cout << "11:00-18:00 - занятия, 18:30-21:00 - гулять" << std::endl;
		break;

		case 7:
		std::cout << "11:00-18:00 - занятия" << std::endl;
		break;

		default:
		std::cout << "Нет такого дня" << std::endl;
	}
	return 0;
}
