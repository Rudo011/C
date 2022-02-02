#include <iostream> 
#include <cmath>
int main()
{ 
	char q = false;
	int qanak = 0;
	int tariq = 0;
	int tariqsum = 0;
	int maxtariq = 0;
	int mintariq = 100;

	for (;;) {

		std::cout << "Введите количество посетителей. " << std::endl;
		std::cin >> qanak;
		std::cout << "Введите возростa посетителей." << std::endl;
		std::cin >> tariq;
		tariqsum += tariq;

		if ( tariq > maxtariq )
		maxtariq = tariq;
		if ( tariq < mintariq )
		mintariq = tariq;
		if ( q )
		break;
	}
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Возрост самого старшего посетителя" << maxtariq << std::endl;
	std::cout << "Возрост самого младшего посетителя" << mintariq << std::endl;
	std::cout << "Средний возрост посетителей" << tariqsum << std::endl;
	
	return 0;
}
