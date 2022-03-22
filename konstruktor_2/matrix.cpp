#include "vector.hpp"
#include "matrix.hpp"

#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string.h>

matrix::matrix(const matrix& c)
	: m_wight(c.m_wight)
	, m_heigth(c.m_heigth)
{
	const int s = m_wight * m_heigth;
	m_data = new unsigned int[s];
	for ( int i = 0; i < s; ++i )
	{
    		m_data[i] = c.m_data[i];
	}
}

matrix::~matrix()
{
	delete[] m_data;
}

void matrix::print()
{
	for ( int j = 0; j < m_heigth * m_wight; j+=m_wight )
	{
		std::cout << "|";
		for (int i = 0; i < m_wight; ++i)
		{
			std::cout << m_data[i+j];
		}	
		std::cout << "|" << std::endl;
	}
}
void matrix::print_B()
{
	for ( int j = 0; j < m_heigth; ++j)
	{
		std::cout << "|";
		for ( int i = 0; i < m_wight; ++i )
		{
			std::cout << m_data[i+j * m_wight] << ",";
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
	
			for ( int j = 0; j < m_heigth * m_wight; ++j )
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
				
				m_data[j] = bit;
			}
		break;

		case 2:

			for ( int j = 0; j < m_heigth * m_wight; ++j )
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

				m_data[j] = bit;
			}
		break;
		
		case 3:
		
			for ( int j = 0; j < m_heigth * m_wight; ++j )
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

				m_data[j] = bit;
			}
		break;
	
		case 4:
		
			for ( int j = 0; j < m_heigth * m_wight; ++j )
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

				m_data[j] = bit;
			}
		break;

		case 5:
		
			for ( int j = 0; j < m_heigth * m_wight; ++j )
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
	
				m_data[j] = bit;
			}
		break;
	
		case 6:
		
			for ( int j = 0; j < m_heigth * m_wight; ++j )
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

				m_data[j] = bit;
			}
		break;

		case 7:
	
			for ( int j = 0; j < m_heigth * m_wight; ++j )
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
		
				m_data[j] = bit;
			}
		break;

		case 8:

			for ( int j = 0; j < m_heigth * m_wight; ++j )
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

				m_data[j] = bit;
			}
		break;
		
		case 9:
		
			for ( int j = 0; j < m_heigth * m_wight; ++j )
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
			
				m_data[j] = bit;
			}
		break;
	}
}
	
matrix::matrix(size_t s)
	:m_wight(s)
	,m_heigth(s)
{
	m_data = new unsigned int[m_heigth * m_wight];
	std::fill(m_data, m_data + m_heigth * m_wight, 0);
}

void matrix::merge(const std::vector <matrix>& v)
{
	assert(!v.empty());
	assert(v[0].m_heigth == v[0].m_wight);
	const size_t s = v[0].m_wight;
	assert(m_wight * m_heigth == s * s * v.size());
	int k = m_wight / s;
	
	for ( int ind = 0; ind < m_wight * m_heigth; ind += s )
	{
		int i = ind / s;
		std::cout << (i % k) + (i / ind) << std::endl;
		memcpy (m_data + ind, v[i % k + i / s].m_data + i / k, sizeof(int) * s );
	}
}

void matrix::average_rgb()
{
		for ( int j = 0; j < m_heigth * m_wight; ++j )
		{
			unsigned int a = m_data[j];
			unsigned int bit = a >> 24;
			unsigned int bit_1 = a << 8;
			bit_1 = bit_1 >> 24;
			unsigned int bit_2 = a << 16;
			bit_2 = bit_2 >> 24;
			unsigned int average = (bit + bit_1 + bit_2) / 3;
			m_data[j] = average;
		}
}

void matrix::compare(matrix & matrix, int epsilon)
{
	int m_epsilon = epsilon - epsilon - epsilon;
	for ( int j = 0; j < m_wight * m_heigth; ++j )
	{
		if ( m_data[j] - m_data[j+1] > epsilon && m_data[j] - m_data[j+1] < m_epsilon)
		{
			matrix.m_data[j] = 1;
		}
		if ( m_data[j] - m_data[j+m_wight] > epsilon && m_data[j] - m_data[j+m_wight] < m_epsilon)
		{
			matrix.m_data[j] = 1;
		}
	}	
}
