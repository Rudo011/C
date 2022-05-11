#include <iostream>

#include "queue.hpp"

template <typename T>
void queue<T>::push(T data)
{	
	if (m_current == m_capacity)
	{
		T* temp = new T[2* m_capacity];

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

template <typename T>
void queue<T>::pop()
{
	if (empty())
	{
		return;
	}

	for (int i = 0; i < m_current; ++i)
	{
		m_data[i] = m_data[i+1];
	}
	m_current--;
} 
		
template <typename T>
void queue<T>::print()
{
	if (empty())
	{
		return;
	}

	for (int i = 0; i < m_current; ++i)
	{
		std::cout << m_data[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T>
T queue<T>::size()
{
	return m_current;
}
	
template <typename T>
T queue<T>::max_size()
{
	return m_capacity;
}

template <typename T>
T queue<T>::front()
{
	return m_data[0];
}

template <typename T>
T queue<T>::back()
{
	return m_data[m_current - 1];
}

template <typename T>
bool queue<T>::empty()
{
	return m_current == 0;
}


