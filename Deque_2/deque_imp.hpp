#include "deque.hpp"

#include <iostream>
#include <cassert>

template <typename T>
void deque<T>::resize()
{
	assert(full());

	T* temp = new T[2 * m_capacity_size];

	for (int i = 0; i <= m_back; ++i)
	{
		temp[i] = m_data[i];
	}
	for (int i = m_back + 1; i < m_capacity_size; ++i)
	{
		temp[i + m_capacity_size] = m_data[i];
	}
	delete[] m_data;
	m_data = temp;
}

template <typename T>
void deque<T>::push_front(const T& data)
{
	if (empty())
	{
		initialize();
		m_front = 0;
		m_back = 0;
	}
	else if (full()) 
	{
		resize();
		m_front = m_front + m_capacity_size - 1;
		m_data[m_front] = data;
		m_capacity_size *= 2;
		m_count++;
		return;
	}
	else if (m_front == 0)
	{
		m_front = m_capacity_size - 1;
	}
	else 
	{
		m_front = m_front - 1;
	}

	m_data[m_front] = data;
	m_count++;
}

template <typename T>
void deque<T>::push_back(const T& data)
{	
	if (empty())
	{
		initialize();
		m_front = 0;
		m_back = 0;
	}

	else if (full()) 
	{ 
		resize();
		m_back++;
		m_data[m_back] = data;
		m_front = m_front + m_capacity_size;
		m_capacity_size *= 2;
		m_count++;
		return;
	}
	else if (m_back == m_capacity_size - 1)
	{
		m_back = 0;
	}
	else
	{
		m_back = m_back + 1;
	}
	
	m_data[m_back] = data;
	m_count++;
}

template <typename T>
void deque<T>::pop_back()
{
	if (empty())
	{
		return;
	}
	m_data[m_back] = 0;
	if (m_front == m_back)
	{
		m_front = -1;
		m_back = -1;
	}
	else if (m_back == 0)
	{
		m_back = m_capacity_size - 1;
	}
	else
	{
		m_back = m_back - 1;
	}
	m_count--;
}

template <typename T>
void deque<T>::pop_front()
{
	if (empty())
	{
		return;
	}
	m_data[m_front] = 0;
	if (m_front == m_back)
	{
		m_front = -1;
		m_back = -1;
	}
	else if (m_front == m_capacity_size - 1)
	{
		m_front = 0;
	}
	else
	{
		m_front = m_front + 1;
	}
	m_count--;
}

template <typename T>
bool deque<T>::full()
{
	return m_front == m_back + 1;
}

template <typename T>
bool deque<T>::empty()
{
	return (m_front == -1 && m_back == -1);
}

template <typename T>
void deque<T>::print()
{
	for (int i = 0; i < m_capacity_size; ++i)
	{
		std::cout << m_data[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T>
T deque<T>::max_size()
{
	return m_capacity_size;
}

template <typename T>
T deque<T>::size()
{
	return m_count;
}

template <typename T>
T& deque<T>::begin()
{
	if (empty())
	{
		std::cout << "Deque is empty" << std::endl;
		exit(0);
	}
	return m_front;
}
	
template <typename T>
T& deque<T>::end()
{
	if (empty())
	{
		std::cout << "Deque is empty" << std::endl;
		exit(0);
	}
	return m_back;
}

template <typename T>
void deque<T>::clear()
{
	T* temp = new T[m_size];
	delete[] m_data;
	m_data = temp;
	m_front = -1;
	m_back = -1;
	m_count = -1;
	m_capacity_size = m_size;
}	

template <typename T>
T& deque<T>::operator[] (size_t index)
{
	if (index >= m_capacity_size)
	{
		std::cout << "Index bigger then capacity size: program crash" << std::endl;
		exit(0);
	}
	assert(index <= m_capacity_size);
	return m_data[index];
}
	
