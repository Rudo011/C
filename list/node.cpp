#include "node.hpp"

node::node()
{
	m_data = 0;
	m_next = 0;
}

node::node(int m_data)
{
	this->m_data = m_data;
	this->m_next = 0;
}
