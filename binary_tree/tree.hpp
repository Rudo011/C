#ifndef TREE_HPP
#define TREE_HPP

#include "node.hpp"

class tree
{
	private:
		node* m_root;
	public:
		tree();
		~tree();
	
		bool empty();

		void push_front(int);
		void print();

};

#endif
