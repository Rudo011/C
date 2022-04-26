#include "deque.hpp"

#include <iostream>
#include <cassert>

template <typename T>
void deque<T>::push_back(T data)
{
	if (m_current == m_capacity)
	{
		assert(m_current == m_capacity);
		T* temp = new T[2 * m_capacity];
	
		for (int i = 0; i < m_capacity; ++i)
		{
			temp[i] = m_data[i];
		}
		delete[] m_data;
		m_capacity *= 2;
		m_data = temp;
	}
	assert(m_capacity > m_current);
	m_data[m_current] = data;
	m_current++;
}

template <typename T>
void deque<T>::push_front(T data)
{
	if (m_current == m_capacity)
	{
		assert(m_current == m_capacity);
		T* temp = new T[2* m_capacity];
		
		for (int i = 0; i < m_capacity; ++i)
		{
			temp[i+1] = m_data[i];
		}
		delete[] m_data;
		temp[0] = data;
		m_capacity *= 2;
		m_data = temp;
		m_current++;
		assert(m_data[0] == data);
	
		return;
	}

	for (int i = m_current; i >= 0; --i)
	{
		m_data[i+1] = m_data[i];
	}
	m_data[0] = data;
	m_current++;
	assert(m_data[0] == data);
}

template <typename T>
void deque<T>::pop_back()
{
	if (empty())
	{
		return;
	}

	m_current--;
	assert(m_data[m_current] != back());
}

template <typename T>
void deque<T>::pop_front()
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
void deque<T>::print()
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
int deque<T>::begin()
{
	return m_data[0];
}

template <typename T>
int deque<T>::back()
{
	return m_data[m_current - 1];
}

template <typename T>
int deque<T>::size()
{
	return m_current - 1;
}

template <typename T>
int deque<T>::max_size()
{
	return m_capacity;
}

template <typename T>
void deque<T>::resize(size_t size)
{	
	if (size < m_current)
	{
		return;
	}
	assert(size > m_current);
	m_capacity = size;
}

template <typename T>
T& deque<T>::operator[](size_t index)
{
	if (index >= m_capacity)
	{
		std::cout << "Index bigger than capacity: program exit" << std::endl;
		exit(0);
	}
	assert(index <= m_capacity);
	return m_data[index];
}

template <typename T>
void deque<T>::clear()
{
	if (empty())
	{
		return;
	}
	m_capacity = 1;
	m_current = 0;
}

template <typename T>
void deque<T>::erase(size_t index)
{
	if (empty())
	{
		return;
	}
	if (index >= m_current)
	{
		return;
	}

	assert(index < m_current);
	for (int i = index; i < m_current; i++)
	{
		m_data[i] = m_data[i+1];
	}
	m_current--;
}

template <typename T>
bool deque<T>::empty()
{
	return m_current == -1;
}
