#include <iostream>

#include "list.hpp"
#include "node.hpp"

list::list()
{
	m_top = 0;
}

void list::push_back(int m_data)
{
	node *tmp = new node(m_data);
	
	if ( m_top == 0 )
	{
		m_top = tmp;
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
	tmp->m_data = m_data;
	tmp->m_next = m_top;
	m_top = tmp;
}

void list::remove(int k)
{
	node* temp = m_top;
	node* prev = 0;

	if ( temp != 0 && temp->m_data == k )
	{
		m_top = temp->m_next;
		delete temp;
		return;
	}

	else
	{
		while ( temp != 0 && temp->m_data != k )
		{
			prev = temp;
			temp = temp->m_next;
		}
		
		if (temp == 0)
		{
			return;
		}
		
		prev->m_next = temp->m_next;
		delete temp;
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
	node* temp = m_top;

	if (m_top == 0)
	{
		std::cout << "List empty" << std::endl;
		return;
	}

	while (temp != 0)
	{
		std::cout << temp->m_data << " ";
		temp = temp->m_next;
	}
	std::cout << std::endl;
}
