#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool calcFirstMove(); 
void drowCube(int res); 
int computerOrPlayerThrow(); 
void showIntermediateResult(int pointsOfComputer, int pointsOfUser, int numberThrow); 

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int playerScore = 0; // для накопления очков
	int computerScore = 0;
	int whoMove = 0; 
	char userName[16] = {};

	cout << "Ваше имя (латиницей): ";
	cin >> userName;
	
	whoMove = calcFirstMove(); // если будет 0 - ходит игрок, 1 - ходит компьютер

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 2; j++)
		{
			if (whoMove)
			{
				cout << "\nХодишь ты. ";
				playerScore += computerOrPlayerThrow();
			}
			else
			{
				cout << "\nХодит компьютер. ";
				computerScore += computerOrPlayerThrow();
			}
			whoMove = !whoMove; // инверсия
		}
		
		showIntermediateResult(computerScore, playerScore, i);		
	}	

	if (computerScore > playerScore)
	{
		cout << "\n\nПобедитель этой игры - КОМПЬЮТЕР\n!";
		cout << "Желаем успехов в следующий раз.\a\a\a\a\a\n\n";
	}
	else if (computerScore < playerScore)
	{
		cout << "\n\nПобедитель этой игры - " << userName << "!!! ";
		cout << "Поздравляем!!!\a\a\a\a\a\n\n";
	}
	else
	{
		cout << "\n\nВ этой игре НИЧЬЯ\a\a\a\a\a\n\n";
	}
		
	return 0;
}

bool calcFirstMove() // генерирует и возвращает случайное число 0 или 1
{
	return rand() % 2;
}

void showIntermediateResult(int computerScore, int playerScore, int numberThrow) {
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "Комп: " << computerScore << "  |||  Ты:" << playerScore << endl;
	cout << "После " << numberThrow + 1 << "-го броска ";
	if (computerScore > playerScore)
		cout << " выигрывает компьютер!!!\n";
	else if (computerScore < playerScore)
		cout << " выигрываете Вы!!!\n";
	else cout << " ничья!!!\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}

// вызывается в функции computerOrPlayerThrow()
void drowCube(int res) 
{
	switch (res)
	{
	case 1:
		cout << "@@@@@@@\n";
		cout << "@@@@@@@\n";
		cout << "@@@ @@@\n";
		cout << "@@@@@@@\n";
		cout << "@@@@@@@\n";
		break;
	case 2:
		cout << "@@@@@@@\n";
		cout << "@ @@@@@\n";
		cout << "@@@@@@@\n";
		cout << "@@@@@ @\n";
		cout << "@@@@@@@\n";
		break;
	case 3:
		cout << "@@@@@@@\n";
		cout << "@ @@@@@\n";
		cout << "@@@ @@@\n";
		cout << "@@@@@ @\n";
		cout << "@@@@@@@\n";
		break;
	case 4:
		cout << "@@@@@@@\n";
		cout << "@ @@@ @\n";
		cout << "@@@@@@@\n";
		cout << "@ @@@ @\n";
		cout << "@@@@@@@\n";
		break;
	case 5:
		cout << "@@@@@@@\n";
		cout << "@ @@@ @\n";
		cout << "@@@ @@@\n";
		cout << "@ @@@ @\n";
		cout << "@@@@@@@\n";
		break;
	case 6:
		cout << "@@@@@@@\n";
		cout << "@ @ @ @\n";
		cout << "@@@@@@@\n";
		cout << "@ @ @ @\n";
		cout << "@@@@@@@\n\n";
		break;
	}
}

int computerOrPlayerThrow() // реализация броска пары кубиков и возврат полученных очков
{
	int result = 0;
	char c = 0;
	 
	cout << "Нажми Y и Enter, чтобы бросить кубики: ";	
	do
	{
		cin.sync(); // очистка буфера
		cin >> c;
	} while (c != 'y' && c != 'Y');
	
	int tmp = 0; // для накопления очков пары брошенных кубиков
	for (int i = 0; i < 2; ++i) {
		tmp = 1 + rand() % 6;
		drowCube(tmp);
		result += tmp;
		cout << endl;
	}

	cout << "Всего на кубиках " << result << " очков";
	return result;
}
