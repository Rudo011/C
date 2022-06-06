#ifndef HASH_HPP
#define HASH_HPP

#include "vector.hpp"
#include <iostream>
#include <fstream>

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
			node<T,K>* tmp = m_map->m_data[indexFunc(key)].find(key);
			
			if (tmp == 0)
			{
				std::cout << "error" << std::endl;
			}
			else
			{
				assert(tmp->m_data->m_key == key);	

				std::cout << tmp->m_data->m_key << std::endl;
				std::cout << tmp->m_data->m_name << std::endl;
				std::cout << std::endl;	
			}
		}
	
		void remove(T key)
		{
			m_map->m_data[indexFunc(key)].remove_n(key);
		}

		T get_key(node<T,K>* node)
		{
			return node->m_data->m_key;
		}

		K get_name(node<T,K>* node)
		{
			return node->m_data->m_name;
		}

		void save()
		{
			std::fstream myfile ("example.txt", std::ios_base::trunc | std::ios_base::in | std::ios_base::out);
			for (int i = 0; i < size; ++i)
			{
				if (!m_map->m_data[i].empty())
				{
					node<T,K>* tmp = m_map->m_data[i].begin();
					
					while(tmp != 0)
					{
						if (myfile.is_open())
						{
								myfile.seekp(0, std::ios_base::end);
								myfile << get_key(tmp) << ":" << get_name(tmp) << std::endl;
						}
						tmp = tmp->m_next;
					}
				}
			}
			myfile.close();
		}
	
		void load()
		{
			std::ifstream myfile("example.txt");
			if(myfile.is_open())
			{
				std::string line;
				while (std::getline(myfile,line))
				{
					int pos = line.find(":");
					std::string str1 = line.substr(0, pos);
					std::string str2 = line.substr(pos + 1);
					insert(std::stoull(str1, 0, 0), str2);
				}
				myfile.close();
			}
		}
};

bool wrongNum(unsigned long long int x)
{
	return x < 10000000000 || x > 99999999999;
}

bool wrongChoice(int x)
{
	return x < 1 || x > 4;
}

#endif

