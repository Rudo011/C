#include <iostream>
#include <cstring>

int main()
{
	char a[10];
	char b[15];
	char c[12];
	char d[8];

	std::cout << "Введите имя студента: " << std::endl;
	std::cin >> a;
	std::cout << "Введите фамилию студента: " << std::endl;
	std::cin >> b;
	std::cout << "Введите отчество студента: " << std::endl;
	std::cin >> c;
	std::cout << "Введите номер группы студента: " << std::endl;
	std::cin >> d;

	int minErkarutyun = 31;
	int erkrordToxiErkarutyun = 25 + strlen(d);
	int erordToxiErkarutyun = strlen(a) + strlen(b) + strlen(c) + 6;

	if ( erkrordToxiErkarutyun >= erordToxiErkarutyun && erkrordToxiErkarutyun > 31 )	
		minErkarutyun = erkrordToxiErkarutyun;
	else 
		if ( erordToxiErkarutyun > 31 )
		minErkarutyun = erordToxiErkarutyun;
	std::cout << "\n\t\t\t";
	for ( int x = 0; x < minErkarutyun; x++ )
		std::cout << "*";

	std::cout << "\n\t\t\t* Лабораторная работа №1";
	for ( int x = 0; x <= ( minErkarutyun - erkrordToxiErkarutyun ); x++ )
		std::cout << " ";

	std::cout << "*\n\t\t\t* Выполнил(а): ст. гр. " << d;
	for ( int x = 0; x <= ( minErkarutyun - erkrordToxiErkarutyun); x++ )
		std::cout << " ";
	
	std::cout << "*\n\t\t\t* " << b << " " << a << " " << c;
	for ( int x = 0; x <= ( minErkarutyun - erordToxiErkarutyun ); x++ )
		std::cout << " ";
	std::cout << "*";

	std::cout << "\n\t\t\t";
	for ( int x = 0; x < minErkarutyun; x++ )
		std::cout << "*";
	std::cout << std::endl;

	return 0;
}
