#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "hash.hpp"
#include "list.hpp"

#include <cstdlib>


const int size = 999;
template<typename T, typename K>
class vector
{
	public:
		list<T, K>* m_data;
	public:
		vector(const int size)
		{
			m_data = new list<T, K>[size]; 
		}
		~vector()
		{	
			delete [] m_data;
		}


};

#endif
