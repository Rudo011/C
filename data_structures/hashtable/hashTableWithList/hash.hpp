#ifndef HASH_HPP
#define HASH_HPP

#include "vector.hpp"
#include <iostream>

template <typename T, typename K>
class hash
{
	private:
		vector<T, K>* m_map;
	public:
		hash()
		{
			m_map = new vector<T, K>(size);
		}
		~hash()
		{
			delete m_map;	
		}
		
		int indexFunc(T key)
		{
			return key % 1000;
		}

		void insert(T key, K name)
		{
			m_map->m_data[indexFunc(key)].insert_l(key, name);
		}
		void search(T key)
		{
			info<T,K>* tmp = m_map->m_data[indexFunc(key)].find(key);
			
			if (tmp == 0)
			{
				std::cout << "error" << std::endl;
			}
			else
			{
				assert(tmp->m_key == key);	
				std::cout << tmp->m_key << std::endl;
				std::cout << tmp->m_name << std::endl;
				std::cout << std::endl;	
			}
		}
};

#endif

