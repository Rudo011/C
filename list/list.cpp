#include <iostream>
#include <cassert>

#include "list.hpp"
#include "node.hpp"

list::list()
	: m_top(0)
	, m_end(0)
{
}

bool list::empty()
{
	return m_top == 0;
}

void list::push_back(int m_data)
{
	node *tmp = new node(m_data);
	
	if ( m_top == 0 )
	{
		m_top = tmp;
		m_end = tmp;
		return;
	}
	node* temp = m_top;
	while (temp->m_next != 0)
	{
		temp = temp->m_next;
	}
	temp->m_next = tmp;
}

void list::push_front(int m_data)
{
	node *tmp = new node(m_data);
	tmp->m_next = m_top;
	m_top = tmp;
}

void list::remove(int k)
{
	if (empty()) {
		return;
	}
	node* current = m_top;
	node* prev = 0;
	while ( current != 0 && k != current->m_data) {
		prev = current;
		current = current->m_next;
	}
	if (current) {
		assert(current->m_data == k);
		if (prev)
		{
			prev->m_next = current->m_next;
		}
		else
		{
			m_top = current->m_next;
		}	
		
		delete current;
	}
}
	
void list::reverse()
{
	node* current = m_top;
	node* prev = 0;
	node* m_next = 0;

	while ( current != 0 )
	{	
		m_next = current->m_next;
		current->m_next = prev;
		prev = current;
		current = m_next;
	}
	m_top = prev;
}

void list::print()
{

	if (m_top == 0)
	{
		std::cout << "List empty" << std::endl;
		return;
	}

	node* temp = m_top;
	while (temp != 0)
	{
		std::cout << temp->m_data << " ";
		temp = temp->m_next;
	}
	std::cout << std::endl;
}

void list::splice(int k, list m)
{
	node* prev = 0;
	node* current = m_top;
	node* next = 0;

	if (empty())
	{
		m_top = m.m_top;
	}

	while (current != 0 && k != current->m_data)
	{
		prev = current;
		current = current->m_next;
		next = current->m_next;
	}
	if(current)
	{
		assert(current->m_data == k);

		current->m_next = m.m_top;
		
		current = m.m_top;

		while (current != 0)
		{
			prev = current;
			current = current->m_next;
		}
		prev->m_next = next;
	}
}
	

		

