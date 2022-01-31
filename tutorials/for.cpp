#include <iostream>
using namespace std;
 
int main()
{
 
int x = 0; 
char exit = 'a'; 
 
for (;;)
{
 		cout << "Введите число: ";
 		cin >> x;


				 cout << "Квадрат " << x << " = " << x * x;
				 cout << "\nПродолжить ввод чисел - A, Выйти  - Любая кнопка: ";
	         cin >> exit; 



			if (exit != 'a' && exit != 'a')
		 break;
} 
	 return 0;
}

