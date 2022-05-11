#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>

#include "vector.hpp"
#include "matrix.hpp"
#include "helper.hpp"


void test (int argc, char** argv)
{
        int size = std::atoi(argv[1]);
        int amount = std::atoi(argv[2]);
        int epsilon = std::atoi(argv[3]);

        if ( argc != 4 )
        {
            std::cout << "Ошибка!!!" << std::endl;
            std::cout << "Введите количество аргументов равно 3." << std::endl;
            exit(0);
        }

        if ( size < 0 )
        {
            std::cout << "Ошибка!!!" << std::endl;
            std::cout << "Первый аргумент меньше 0." << std::endl;
            exit(0);
        }

	if (sqrt(amount) - (int)sqrt(amount) != 0)
	{
		std::cout << "Количество матриц не коректна. " << std::endl;
		std::cout << "Попробуйте еще раз (введите число с чистым корнем). " << std::endl;
		exit(0);
	}
    
        if ( epsilon < 0 )
        {
            std::cout << "Ошибка!!!" << std::endl;
            std::cout << "Третий аргумент меньше 0." << std::endl;
            exit(0);
        }
}

void del (const std::vector<matrix*> & p)
{
	std::vector<matrix*>::const_iterator k;

	for ( k = p.begin(); k < p.end(); k++ )
	{
		delete *k;
	}
}

