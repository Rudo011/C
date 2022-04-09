#include <iostream>

#include "queue.hpp"

template <typename T>
bool queue<T>::empty()
{
	return m_current == 0;
}

template <typename T>
void queue<T>::push_back(T data)
{
	if (m_current = m_capacity)
	{
		T* temp = new T[2* m_capacity]

		for (int i = 0; i < m_capacity; ++i)
		{
			temp[i] = m_data[i];
		}

		delete[] m_data;
		m_capacity *= 2;
		m_data = temp;
	}
	m_data[m_current] = data;
	m_current++;
}	
		
