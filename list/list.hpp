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
		void front();
		void back();
		void pop_front();
		void pop_back();
		void insert(int, int);
		void size();
		void find(int);
		void swap_node(node*, node*);
		void swap(int, int);
		void sort();
		bool empty();
		
};

#endif
