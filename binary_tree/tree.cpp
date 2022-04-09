#include <iostream>

#include "node.hpp"
#include "tree.hpp"

tree::tree()
	:m_root(0)
{
}

tree::~tree()
{
	delete m_root;
}

void tree::push_front(int data)
{
	node* tmp = new node(data);
	m_root = tmp;
}

bool tree::empty()
{
	return m_root == 0;
}

void tree::print()
{
	if (empty())
	{
		return;
	}
	
	if (m_root == 0)
	return;

	std::cout << m_root->m_data << std::endl;

	print(m_root->m_left);
	print(m_root->m_right);
}
	
