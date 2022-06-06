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

		node<T,K>* begin()
		{
			return m_top;
		}

		bool empty()
		{
			return m_top == 0;
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
		
			if (find(key) != 0)
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
	
		node<T,K>* find(T key)
		{
			if (empty())
			{
				return 0;
			}
			
			else
			{
				node<T,K>* current = m_top;

				while (current->m_data->m_key != key && current->m_next != 0)
				{	
					current = current->m_next;
				}

				assert(current);
				if (current->m_data->m_key == key)
				{
					return current;
				}
				else 	
				{
					return 0;
				}
			}
		}
	
		void remove_n(T key)
		{
			node<T,K>* current = find(key);

			if(current)
			{
				if (current == m_top)
				{
					m_top = current->m_next;	
				}
				else if (current == m_end)
				{
					m_end = current->m_prev;
				}
				else
				{
					current->m_prev->m_next = current->m_next;
					current->m_next->m_prev = current->m_prev;
				}
				delete current;
			}
		}
	
			
};

#endif
