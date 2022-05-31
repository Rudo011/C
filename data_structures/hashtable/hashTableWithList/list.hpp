#ifndef LIST_HPP
#define LIST_HPP

#include "node.hpp"
#include <iostream>
#include <cassert>

template <typename T, typename K>
class list
{
	public:
		node<T, K>* m_top;
		node<T, K>* m_end;
	public:
		list()
			:m_top(0)
			,m_end(0)
		{
		}
		~list()
		{
			node<T, K>* current = this->m_top;
	
			while (current != 0)
			{
				node<T,K>* next = current->m_next;
				delete current;
				current = next;
			}
		}

		bool empty()
		{
			return m_top == 0;
		}
	
		bool repeat(T key)
		{
			node<T,K>* current = this->m_top;
	
			return current->m_data->m_key == key;
			
			while(current != 0 || current->m_data->m_key == key)
			{
				node<T,K>* next = current->m_next;
				current = next;
			}
		
			return current->m_data->m_key == key;
		}
		

		void insert_l(T key, K name)
		{
			if (empty())
			{
				info<T,K>* temp = new info<T,K>(key, name);
				node<T,K>* tmp = new node<T,K>(temp);
				m_top = tmp;
				m_end = tmp;
				return;
			}
		
			if (repeat(key))
			{
				std::cout << "Error!" << std::endl;
				return;
			}
			
			info<T,K>* temp = new info<T,K>(key, name);
			node<T,K>* tmp = new node<T,K>(temp);
			tmp->m_next = m_top;
			m_top->m_prev = tmp;
			m_top = tmp;
		}
	
		info<T,K>* find(T key)
		{
			if (empty())
			{
				return 0;
			}
			
			else if (m_top == m_end)
			{
				return m_top->m_data;
			}
			else
			{
				node<T,K>* current = this->m_top;

				while(current != 0 || current->m_data->m_key == key)
				{
					node<T,K>* next = current->m_next;
					current = next;
				}

				if (current == 0)
				{
					return 0;
				}
				else 	
				{
					assert(current->m_data->m_key == key);
					return current->m_data;
				}
			}
		}
				
				
			
};

#endif
