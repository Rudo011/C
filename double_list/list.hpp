#ifndef LIST_HPP
#define LIST_HPP

#include "node.hpp"

class list
{
	private:
		node* m_top;
		node* m_end;
	public:
		list();
		~list();

		node* front();
		node* back();
		node* find(int);

		void print();
		void push_front(int);
		void push_back(int);
		void insert(node*, int);
		void pop_front();
		void pop_back();
		void swap(node*, node*);
		void sort();
		void remove(node*);
		void reverse();
		void splice(node*, list &);

		bool empty();
	
		int size();
};

#endif
