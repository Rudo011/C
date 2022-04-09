#include "node.hpp"

node::node()
	:m_data(0)
	,m_right(0)
	,m_left(0)
{
}

node::node(int data)
{
	this->m_data = data;
	this->m_right = 0;
	this->m_left = 0;
}
