#include <iostream>
#include <ctime>
#include <cstdlib>
#include "mat.hpp"
#include "vector.hpp"

mat* rbg_lcnel (mat* matrix, size_t n)
{
        switch (n) 
        {
                case 1:
    
                for ( int i = 0; i < matrix->wight; ++i )
                {
                        for ( int j = 0; j < matrix->heigth; ++j )
                        {
                                unsigned int bit = 0;
                                unsigned int red = 230 + rand() % 255;
                                unsigned int blue = 70 + rand() % 110;
                                unsigned int green = 70 + rand() % 110;

                                bit = bit | red;
                                bit = bit << 8;
                                bit = bit | blue;
                                bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				matrix->data[i][j] = bit;
			}
		}
		break;
	
		case 2:

		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 84 + rand() % 124;
				unsigned int blue = 84 + rand() % 124;
				unsigned int green = 84 + rand() % 124;

				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				matrix->data[i][j] = bit;
			}
		}
		break;
		
		case 3:
		
		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 10 + rand() % 50;
				unsigned int blue = 10 + rand() % 50;
				unsigned int green = 10 + rand() % 30;
			
				bit = bit | red;	
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				matrix->data[i][j] = bit;
			}
		}
		break;

		case 4:

		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 60 + rand() % 80;
				unsigned int blue = 50 + rand() % 60;
				unsigned int green = 40 + rand() % 50;
	
				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				matrix->data[i][j] = bit;
			}
		}
		break;
	
		case 5:
		
		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 80 + rand() % 100;
				unsigned int blue = 100 + rand() % 110;
				unsigned int green = 90 + rand() % 100; 
		
				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				matrix->data[i][j] = bit;
			}
		}
		break;
	
		case 6:

		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 100 + rand() % 120;
				unsigned int blue = 120 + rand() % 130;
				unsigned int green = 130 + rand() % 135;
		
				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				matrix->data[i][j] = bit;
			}	
		}
		break;
	
		case 7:

		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 15 + rand() % 20;
				unsigned int blue = 25 + rand() % 36;
				unsigned int green = 24 + rand() % 30;
			
				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;
	
				matrix->data[i][j] = bit;
			}
		}
		break;
	
		case 8:

		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 200 + rand() % 220;
				unsigned int blue = 170 + rand() % 180;
				unsigned int green = 180 + rand() % 200;
			
				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				matrix->data[i][j] = bit;
			}
		}
		break;

		case 9:

		for ( int i = 0; i < matrix->wight; ++i )
		{
			for ( int j = 0; j < matrix->heigth; ++j )
			{
				unsigned int bit = 0;
				unsigned int red = 160 + rand() % 169;
				unsigned int blue = 24 + rand() % 30;
				unsigned int green = 45 + rand() % 60;
			
				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;
			
				matrix->data[i][j] = bit;
			}
		}
		break;
		}

		mat* b = new mat;
		b->wight = matrix->wight;
		b->heigth = matrix->heigth;
		b->data = matrix->data;

		return b;
}

