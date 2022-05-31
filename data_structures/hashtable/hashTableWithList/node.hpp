#ifndef NODE_HPP
#define NODE_HPP

#include "info.hpp"

template <typename T, typename K>
class node
{
	public:
		info<T,K>* m_data;
		node<T,K>* m_next;
		node<T,K>* m_prev;
		
	public:
		node()
			:m_data(0)
			,m_next(0)
			,m_prev(0)
		{
		}

		node(info<T,K>* data)
			:m_data(data)
			,m_next(0)
			,m_prev(0)
		{
		}
};
	
#endif
