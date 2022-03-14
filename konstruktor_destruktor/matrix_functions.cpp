#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

#include "vector.hpp"
#include "matrix.hpp"

matrix::matrix(vector & m, vector & n)
	:m_wight(m.m_size)
	,m_heigth(n.m_size)
{
	m_data = new unsigned int*[m_wight];

	for (int i = 0; i < m_heigth; ++i)
	{
		m_data[i] = new unsigned int[m_heigth];
	}
	
	for (int i = 0; i < m_wight; ++i)
	{
		for (int j = 0; j < m_heigth; ++j)
		{	
			m_data[i][j] = m.m_data[i] * n.m_data[j];
		}
	}
} 

matrix::~matrix()
{
	for (int i = 0; i < m_wight; ++i )
	{
		delete [] m_data[i];
	}
	delete[] m_data;
}

void matrix::print()
{
	for (int i = 0; i < m_wight; ++i)
	{
		std::cout << "|";
		for (int j = 0; j < m_heigth; ++j)
		{
			std::cout << m_data[i][j] << ",";
		}
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
}

void matrix::rgb_lcnel(size_t n)
{
	switch(n)
	{
		case 1:
	
		for ( int i = 0; i < m_wight; ++i )
		{
			for ( int j = 0; j < m_heigth; ++j )
			{
				size_t bit = 0;
				size_t red = 230 + rand() % 15;
				size_t blue = 230 + rand() % 15;
				size_t green = 230 + rand() % 15;
	
				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;	
				
				m_data[i][j] = bit;
			}
		}
		break;

		case 2:

		for ( int i = 0; i < m_wight; ++i )
		{
			for ( int j = 0; j < m_heigth; ++j )
			{
				size_t bit = 0;
				size_t red = 60 + rand() % 10;
				size_t blue = 60 + rand() % 10;
				size_t green = 60 + rand() % 10;

				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				m_data[i][j] = bit;
			}
		}
		break;
		
		case 3:
		
		for ( int i = 0; i < m_wight; ++i )
		{
			for ( int j = 0; j < m_heigth; ++j )
			{
				size_t bit = 0;
				size_t red = 100 + rand() % 15;
				size_t blue = 100 + rand() % 15;
				size_t green = 100 + rand() % 15;
				
				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				m_data[i][j] = bit;
			}
		}
		break;
	
		case 4:
		
		for ( int i = 0; i < m_wight; ++i )
		{
			for ( int j = 0; j < m_heigth; ++j )
			{
				size_t bit = 0;
				size_t red = 80 + rand() % 10;
				size_t blue = 80 + rand() % 10;
				size_t green = 80 + rand() % 10;

				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				m_data[i][j] = bit;
			}
		}
		break;

		case 5:
		
		for ( int i = 0; i < m_wight; ++i )
		{	
			for ( int j = 0; j < m_heigth; ++j )
			{
				size_t bit = 0;
				size_t red = 20 + rand() % 10;
				size_t blue = 20 + rand() % 10;
				size_t green = 20 + rand() % 10;

				bit = bit | red;	
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;
	
				m_data[i][j] = bit;
			}
		}
		break;
	
		case 6:
		
		for ( int i = 0; i < m_wight; ++i )
		{	
			for ( int j = 0; j < m_heigth; ++j )
			{
				size_t bit = 0;
				size_t red = 190 + rand() % 15;
				size_t blue = 190 + rand() % 15;
				size_t green = 190 + rand() % 15;

				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				m_data[i][j] = bit;
			}
		}
		break;

		case 7:
	
		for ( int i = 0; i < m_wight; ++i )
		{
			for ( int j = 0; j < m_heigth; ++j )
			{
				size_t bit = 0;
				size_t red = 210 + rand() % 10;
				size_t blue = 210 + rand() % 10;
				size_t green = 210 + rand() % 10;

				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;	
				bit = bit | green;
				bit = bit << 8;
		
				m_data[i][j] = bit;
			}
		}
		break;

		case 8:

		for ( int i = 0; i < m_wight; ++i )
		{
			for ( int j = 0; j < m_heigth; ++j )
			{
				size_t bit = 0;
				size_t red = 120 + rand() % 15;
				size_t blue = 120 + rand() % 15;
				size_t green = 120 + rand() % 15;
		
				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;

				m_data[i][j] = bit;
			}
		}
		break;
		
		case 9:
		
		for ( int i = 0; i < m_wight; ++i )
		{
			for ( int j = 0; j < m_heigth; ++j )
			{
				size_t bit = 0;
				size_t red = 160 + rand() % 15;
				size_t blue = 160 + rand() % 15;
				size_t green = 160 + rand() % 15;
		
				bit = bit | red;
				bit = bit << 8;
				bit = bit | blue;
				bit = bit << 8;
				bit = bit | green;
				bit = bit << 8;
			
				m_data[i][j] = bit;
			}
		}
		break;
	}
}
	
matrix::matrix(size_t s)
	:m_wight(s)
	,m_heigth(s)
{
	m_data = new unsigned int*[m_wight];

	for ( int i = 0; i < m_wight; ++i )
	{
		m_data[i] = new unsigned int[m_heigth];
	}
	
	for ( int i = 0; i < m_wight; ++i )
	{
		for ( int j = 0; j < m_heigth; ++j )
		{
			m_data[i][j] = 0;
		}	
	}
}

void matrix::merge(const std::vector <matrix*>& v)
{
	int k = (m_heigth / v[0]->m_wight)*(m_heigth / v[0]->m_wight);
	int g = 0;
	for ( int m = 0; m < m_heigth; m+=v[0]->m_heigth )
	{	
		for ( int l = 0; l < m_wight && g < k; l+=v[0]->m_wight, g++ )	
		{
			for ( int i = 0; i < v[0]->m_wight; ++i )
			{
				for ( int j = 0; j < v[0]->m_heigth; ++j )
				{
					m_data[i+m][j+l] = v[g]->m_data[i][j];
				}
			}
		}
	}	
}

void matrix::average_rgb()
{
	for ( int i = 0; i < m_wight; ++i )
	{
		for ( int j = 0; j < m_heigth; ++j )
		{
			unsigned int a = m_data[i][j];
			unsigned int bit = a >> 24;
			unsigned int bit_1 = a << 8;
			bit_1 = bit_1 >> 24;
			unsigned int bit_2 = a << 16;
			bit_2 = bit_2 >> 24;
			unsigned int average = (bit + bit_1 + bit_2) / 3;
			m_data[i][j] = average;
		}
	}
}

void matrix::compare(matrix & matrix, int epsilon)
{
	int m_epsilon = epsilon - epsilon - epsilon;
	for ( int i = 0; i < m_wight-1; ++i )
	{
		for ( int j = 0; j < m_heigth; ++j )
		{
			if ( m_data[i][j] - m_data[i][j+1] > epsilon && m_data[i][j] - m_data[i][j+1] < m_epsilon)
			{
				matrix.m_data[i][j] = 1;
			}
			if ( m_data[i][j] - m_data[i+1][j] > epsilon && m_data[i][j] - m_data[i+1][j] < m_epsilon)
			{
				matrix.m_data[i][j] = 1;
			}
		}
	}
}
