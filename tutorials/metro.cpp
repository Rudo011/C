#include <iostream>
int main()
{
	int number = 0;
	bool x = true;

	std::cout << "Введите номер станции метро, для подсчета времени" << std::endl;
	std::cout << "1 - станция Сасунци Давид" << std::endl;
	std::cout << "2 - станция Барекамутюн" << std::endl;
	std::cout << "3 - станция Киликиа" << std::endl;
	std::cout << "4 - станция Баграмян" << std::endl;
	std::cout << "5 - станция Московская" << std::endl;


	do {
		std::cin >> number;


		switch ( number ) {
			case 1:
			std::cout <<"До станции метро Сасунци Давид - 8 минут" << std::endl;
			break;

			case 2:
			std::cout << "До станции метро Барекамутюн - 15 минут" << std::endl;
			break;

			case 3:
			std::cout << "До станции метро Киликиа - 18 минут" << std::endl;
			break;

			case 4:
			std::cout << "До станции метро Баграмян - 21 минут" << std::endl;
			break;

			case 5:
			std::cout << "До станции метро Московская - 26 минут" << std::endl;
			break;

			default:
			std::cout << "Такой станции не существует!" << std::endl;
			std::cout << "Пожалуйста введите правильный номер! (1-5)" << std::endl;

		}

		if ( number >= 1 && number <= 5 )
		x = false;
	}
	while ( x );
	return 0;
}
