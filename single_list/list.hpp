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
		~list();
		void push_back(int);
		void push_front(int);
		void remove(node*);
		void reverse();
		void splice (node*, list &);
		void print();
		node* front();
		node* back();
		void pop_front();
		void pop_back();
		void insert(node*, int);
		int size();
		node* find(int);
		void swap(node*, node*);
		void sort();
		bool empty();
		
};

#endif
