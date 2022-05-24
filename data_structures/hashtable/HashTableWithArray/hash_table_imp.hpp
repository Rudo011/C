#include "hash_table.hpp"
#include "hash_entry.hpp"

#include <string>
#include <cstdlib>
#include <iostream>

int hashFunc(unsigned long long int x)
{
	return x%1000;
}

bool wrongNum(unsigned long long int num)
{
	return num < 10000000000 || num > 99999999999;
}

bool hash_table::empty()
{
	return m_count == 0;
}

void hash_table::insert_rekursia(int index, unsigned long long int number, std::string text)
{
	if (m_map[index] != 0)
	{
		insert_rekursia(index + 1, number, text);
	}
	else
	{
		m_map[index] = new hash_entry(number, text);
	}
	return;
}

void hash_table::insert(unsigned long long int number, std::string text)
{
	int index = hashFunc(number);

	if (m_map[index] != 0)
	{
		insert_rekursia(index, number, text);
		m_count++;
		return;
	}
			
	else
	{
		m_map[index] = new hash_entry(number, text); 
		m_count++;
	}
}

void hash_table::remove(unsigned long long int number)
{
	int index = hashFunc(number);

	if (empty())
	{
		return;
	}
	else if (m_map[index]->m_key == number)
	{
		delete m_map[index];
		m_map[index] = 0;
		return;
	}
	else if (hashFunc(m_map[index]->m_key) == hashFunc(m_map[index+1]->m_key))
	{
		for (int i = index; i < size; ++i)
		{
			if (m_map[i] == 0) {
				break;
			}

			if (m_map[i]->m_key == number)
			{
				delete m_map[i];
				m_map[i] = 0;
				break;
			}
		}
	}
}

void hash_table::search(unsigned long long int number)
{
	int index = hashFunc(number);
	
	if (empty())
	{
		return;
	}
	else if (m_map[index]->m_key == number)
	{
		std::cout << std::endl;
		std::cout << "Phone number: " << number << std::endl;
		std::cout << "Name and Surname: " << m_map[index]->m_name << std::endl;
		return;
	}
	else if (hashFunc(m_map[index]->m_key) == hashFunc(m_map[index+1]->m_key))
	{
		for (int i = index; i < 10; ++i)
		{
			if (m_map[i]->m_key == number)
			{
				std::cout << std::endl;
				std::cout << "Phone number: " << number << std::endl;
				std::cout << "Name and Surname: " << m_map[index]->m_name << std::endl;
				break;
			}
		}
	}
}
	
	
