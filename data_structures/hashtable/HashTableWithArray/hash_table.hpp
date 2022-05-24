#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP

#include <cstring>
#include "hash_entry.hpp"

class hash_table
{
	public:
		hash_entry** m_map;
		int m_count;
	public:
		hash_table()
		{
			m_map = new hash_entry*[size];
			memset(m_map, 0, size*sizeof(hash_entry*));
			m_count = 0;
		}
		~hash_table()
		{
			for (int i = 0; i < size; ++i)
			{
				delete m_map[i];
			}
			delete [] m_map;
		}

		bool empty();
	
		void insert(unsigned long long int, std::string);
		void search(unsigned long long int);
		void remove(unsigned long long int);
		void print();
	private:	
		void insert_rekursia(int, unsigned long long int, std::string);
};

#endif 					
