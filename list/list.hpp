#ifndef LIST_HPP
#define LIST_HPP

#include "node.hpp"

class list
{
	private:		
		node *m_top;
		node *m_end;
	public:
		list();
		void push_back(int);
		void push_front(int);
		void remove(int);
		void reverse();
		void splice (int, list);
		void print();
		bool empty();
		
};

#endif
