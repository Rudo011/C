#ifndef NODE_HPP
#define NODE_HPP

#include "tree.hpp"

class node 
{
	public:
		int m_data;
		node* m_left;
		node* m_right;
		int m_height;
	public:
		node();

		template <typename T>
		node(T);
		
		node* minNode(node*);
		node* rightRotate(node*);
		node* leftRotate(node*);
	
		template <typename T>
		node* inserter(node*, T);
		template <typename T>
		node* deleter(node*, T);
};

#endif
