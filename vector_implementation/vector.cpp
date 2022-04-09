#include <iostream>

#include "vector.hpp"

template <typename T>
void vector<T>::push_back(T data)
{
	if (m_current == m_capacity)
	{
		T* temp = new T[2 * m_capacity];

		for ( int i = 0; i < m_capacity; ++i )
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
void vector<T>::push_front(T data)
{
	if (m_current == m_capacity)
	{
		T* temp = new T[2 * m_capacity];
		
		for ( int i = 0; i < m_capacity; ++i )
		{
			temp[i] = m_data[i];
		}
		delete [] m_data;
		m_capacity *= 2;
		m_data = temp;
	}
	
	for (int i = m_current; i >= 0; --i)
	{
		m_data[i+1] = m_data[i];
	}
	m_data[0] = data;
	m_current++;
}

template <typename T>
void vector<T>::assign(T data, size_t index)
{
	if (index >= m_current)
	{
		std::cout << "Error" << std::endl;
		return;
	}
	m_data[index] = data;
}

template <typename T>
void vector<T>::print()
{
	if (empty())
	{
		return;
	}

	for ( int i = 0; i < m_current; ++i )
	{
		std::cout << m_data[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T>
T vector<T>::get(size_t index)
{
	if (empty())
	{ 	
		return;
	}
	if (index < m_current)
	return m_data[index];

	return 0;
}

template <typename T>
int vector<T>::size()
{
	return m_current;
}

template <typename T>
void vector<T>::pop_back()
{
	if (empty())
	{
		return;
	}

	m_current--;
}

template <typename T>
int vector<T>::max_size()
{
	return m_capacity;
}

template <typename T>
T vector<T>::begin()
{
	if (empty())
	{
		return;
	}

	return m_data[0];
}

template <typename T>
T vector<T>::end()
{
	if (empty())
	{
		return;
	}

	return m_data[m_current];
}

template <typename T>
void vector<T>::resize(size_t n)
{
	if (n < m_current)
	{
		return;
	}

	T* temp = new T[n];
	
	for (int i = 0; i < m_capacity; ++i)
	{
		temp[i] = m_data[i];
	}
	delete [] m_data;
	m_capacity = n;
	m_data = temp;
}

template <typename T>
bool vector<T>::empty()
{
	return m_current == 0;
}

template <typename T>
void vector<T>::insert(size_t index, T data)
{
	if (m_capacity == m_current)
	{
		T* temp = new T[2 * m_capacity];
		
		for (int i = 0; i < m_capacity; ++i )
		{
			temp[i] = m_data[i];
		}
		delete[] m_data;
		m_capacity *= 2;
		m_data = temp;
	}

	for (int i = m_current; i > index; --i)
	{
		m_data[i+1] = m_data[i];
	}
	m_data[index+1] = data;
	m_current++;
}

template <typename T>
void vector<T>::erase(size_t index)
{
	if (empty())
	{
		std::cout << "Vector is empty" << std::endl;
		return;
	}

	if (index > m_current)
	{
		std::cout << "Index is out of bounds" << std::endl;
		return;
	}

	for (int i = index; i < m_current; ++i )
	{
		m_data[i] = m_data[i+1];
	}
	m_current--;
}
	
template <typename T>
void vector<T>::clear()
{
	if (empty())
	{
		return;
	}

	T* temp = new T[1];
	delete m_data;
	m_data = temp;
	m_capacity = 1;
	m_current = 0;
}

template <typename T>
void vector<T>::swap(vector<T>& a)
{
	T* temp = new T[m_capacity];

	temp = m_data;
	size_t t_capacity = m_capacity;
	size_t t_current = m_current;

	m_data = a.m_data;
	m_capacity = a.m_capacity;
	m_current = a.m_current;

	a.m_data = temp;
	a.m_capacity = t_capacity;
	a.m_current = t_current;
}
