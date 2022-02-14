#include <iostream>
#include <ctime>
#include <cstdlib>

bool calcWhoMoveFirst();
void drowCube ( int res );
int computerOrPlayerThrow();
void showResult ( int pointsOfCompuer, int pointsOfUser, int numberThrow );

int main()
{
	srand ( time ( NULL ) );
	
	int playerScore = 0;
	int computerScore = 0;
	int whoMove = 0;
	char username[16] = {};

	std::cout << "Введите ваше имя: " ;
	std::cin >> username;

	whoMove = calcWhoMoveFirst();
	
	for ( int i = 0; i < 4; ++i )
	{
		for ( int j = 0; j < 2; j++ )
		{
			if ( whoMove )
			{
				std::cout << "\nХодешь ты. ";
				playerScore += computerOrPlayerThrow();
			}
			else 
			{
				std::cout << "\nХодит компютер. ";
				computerScore += computerOrPlayerThrow();
			}
			whoMove = !whoMove;
		}

		showResult ( computerScore, playerScore, i );
	}

	if ( computerScore > playerScore )
	{
		std::cout << "\n\nПобедитель этой игры Компютер\n!";
		std::cout << "Желаем успехов в следующий раз.\a\a\a\a\a\n\n";
	}
	else if ( computerScore < playerScore )
	{
		std::cout << "\n\nПобедитель этой игры - " << username << "!!!";
		std::cout << "Поздравляем!!!\a\a\a\a\a\n\n";
	}
	else
	{
		std::cout << "\n\nВ этой игре нечья\a\a\a\a\a\n\n";
	}
	
	return 0;
}

bool calcWhoMoveFirst()
{ 
	return rand () % 2;
}

void showResult ( int computerScore, int playerScore, int numberThrow)
{
	std::cout << " \n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Комп: " << computerScore << "  ||| Ты: " << playerScore << std::endl;
	std::cout << "После: " << numberThrow + 1 << "- го броска ";
	if ( computerScore > playerScore )
	{
		std::cout << " Выйгрывает компютер!!!\n";
	}
	else if ( computerScore < playerScore )
	{
		std::cout << " Выйгрываете Вы!!!\n";
	}
	else 
	{
		std::cout << "Нечья!!!\n";
		std::cout << "\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}
}


void drowCube ( int res )
{
	switch (res)
	{
	case 1:
		std::cout << "@@@@@@@\n";
		std::cout << "@@@@@@@\n";
		std::cout << "@@@ @@@\n";
		std::cout << "@@@@@@@\n";
		std::cout << "@@@@@@@\n";
		break;
	case 2:
		std::cout << "@@@@@@@\n";
		std::cout << "@@@@@@@\n";
		std::cout << "@ @@@ @\n";
		std::cout << "@@@@@@@\n";
		std::cout << "@@@@@@@\n";
		break;
	case 3:
		std::cout << "@@@@@@@\n";
		std::cout << "@ @@@@@\n";
		std::cout << "@@@ @@@\n";
		std::cout << "@@@@@ @\n";
		std::cout << "@@@@@@@\n";
		break;
	case 4:
		std::cout << "@@@@@@@\n";
		std::cout << "@ @@@ @\n";
		std::cout << "@@@@@@@\n";
		std::cout << "@ @@@ @\n";
		std::cout << "@@@@@@@\n";
		break;
	case 5:
		std::cout << "@@@@@@@\n";
		std::cout << "@ @@@ @\n";
		std::cout << "@@@ @@@\n";
		std::cout << "@ @@@ @\n";
		std::cout << "@@@@@@@\n";
		break;
	case 6:
		std::cout << "@@@@@@@\n";
		std::cout << "@ @ @ @\n";
		std::cout << "@@@@@@@\n";
		std::cout << "@ @ @ @\n";
		std::cout << "@@@@@@@\n";
	}
}

int computerOrPlayerThrow()
{
	int result = 0;
	int c = 0;
	
	std::cout << "Нажми Y и Enter, чтобы бросить кубики: ";
	do 
	{
		std::cin.sync();
		std::cin >> c;
	}
	while
		( c != 'y' && c != 'Y' );

	int tmp = 0;
	for ( int i = 0; i < 2; ++i )
	{
		tmp = 1 + rand() % 6;
		drowCube ( tmp );
		result += tmp;
		std::cout << std::endl;
	}
	
	std::cout << " Всего на кубиках " << result << " очков";
	return result;
}





















































