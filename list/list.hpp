#ifndef LIST_HPP
#define LIST_HPP

#include "node.hpp"

class list
{
	private:		
		node *m_top;
	public:
		list();
		void push_back(int);
		void push_front(int);
		void remove(int);
		void reverse();
		void print();
		
};

#endif
