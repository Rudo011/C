#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
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
}

void matrix::rbg_lcnel(size_t n)
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
}

void matrix::BIG_MATRIX(unsigned int** a, unsigned int** b, unsigned int** c, unsigned int** d, unsigned int** e, 				       unsigned int** f, unsigned int** g, unsigned int** h, unsigned int** i, unsigned int** MATRIX)
{
	for ( int i = 0; i < m_wight; ++i )
	{
		for ( int j = 0; j < m_heigth; ++i )
		{
			MATRIX[i][j] = a.m_data[i][j];
			MATRIX[i][j+m_heigth] = b.m_data[i][j];
			MATRIX[i][j+m_heigth*2] = c.m_data[i][j];
			MATRIX[i+m_wight][j] = d.m_data[i][j];
			MATRIX[i+m_wight][j+m_heigth] = e.m_data[i][j];
			MATRIX[i+m_wight][j+m_heigth*2] = f.m_data[i][j];
			MATRIX[i+m_wight*2][j] = g.m_data[i][j];
			MATRIX[i+m_wight*2][j+m_heigth] = h.m_data[i][j];
			MATRIX[i+m_wight*2][j+m_heigth*2] = i.m_data[i][j];
		}
	}
}


