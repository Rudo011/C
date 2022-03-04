#include <iostream>
#include <ctime>
#include <cstdlib>
#include "vector.hpp"

vector::vector(size_t s)
	:m_size(s)
	,m_data(0)
{
	m_data = new int[m_size];
	
	for (int i = 0; i < m_size; ++i)
	{
		m_data[i] = rand() % 2;
	}
}

vector::~vector()
{
	delete [] m_data;
}

//vector::print)
//{
//	for (int i = 0; i < m_size; ++i)
///	{
//		std::cout << "|" << m_data[i] << "|";
//	}
//}
