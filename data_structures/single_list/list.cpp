#include <iostream>
#include <cassert>

#include "list.hpp"
#include "node.hpp"

list::list()
	: m_top(0)
	, m_end(0)
{
}

list::~list()
{
	node* current = this->m_top;
	
	while(current != 0)
	{
		node* next = current->m_next;
		delete current;
		current = next;
	}
}

node* list::front()
{
	return m_top;
}

node* list::back()
{
	return m_end;
}

void list::pop_front()
{
	node* current = m_top;
	m_top = current->m_next;
	delete current;
}

void list::pop_back()
{
	if (empty()) {
		return;
	}
	if (m_top == m_end) {
		delete m_end;
		m_end = 0;
		m_top = 0;
		return;	
	}
	node* prev = m_top;
	while (prev->m_next != m_end)
	{
		prev = prev->m_next;
	}
	prev->m_next = 0;
	delete m_end;
	m_end = prev;
}

void list::insert(node* k, int m_data)
{
	node* tmp = new node(m_data);
	if (empty())
	{
		m_top = tmp;
		m_end = tmp;
		return;
	}

	if(k != 0)
	{
		tmp->m_next = k->m_next;
		k->m_next = tmp;
	}
	else 
	{
		std::cout << "Element didn't find" << std::endl;
	}
}
		
int list::size()
{
	node* current = m_top;
	int count = 0;
	
	while (current != m_end)
	{
		++count;
		current = current->m_next;
	}
	return count;
}
	
void list::swap(node* a, node* b)
{
	if(a && b)
	{
		int temp = a->m_data;
		a->m_data = b->m_data;
		b->m_data = temp;
	}
	else 
	{
		std::cout << "Elements didn't find" << std::endl;
	}
}

void list::sort()
{
	if (empty())
	{
		return;
	}

	node* current = 0;	
	bool status = false;
	do
	{
		current = this->m_top;
		status = false;
		while ( current != 0 && current->m_next != 0 )
		{
			if ( current->m_data > current->m_next->m_data)
			{
				swap(current, current->m_next);
				status = true;
			}
			current = current->m_next;
		}
	}
	while(status);
}

node* list::find(int k)
{
	node* current = m_top;
	while (current && current->m_data != k)
	{
		current = current->m_next;
	}
		return current;
} 

bool list::empty()
{
	return m_top == 0;
}

void list::push_back(int m_data)
{
	node *tmp = new node(m_data);
	if (empty())
	{
		m_top = tmp;
		m_end = tmp;
		return;
	}
	m_end->m_next = tmp;
	m_end = tmp;
}

void list::push_front(int m_data)
{
	node *tmp = new node(m_data);
	
	if (empty())
	{
		m_top = tmp;
		m_end = tmp;
		return;
	}

	tmp->m_next = m_top;
	m_top = tmp;
}

void list::remove(node* k)
{
	if (empty())
	{
		return;
	}
	node* current = m_top;
	node* prev = 0;	

	while ( current != 0 && k != current) 
	{
		prev = current;
		current = current->m_next;
	}

	if (current)
	{
		assert(current == k);
		if (prev)
		{
			prev->m_next = current->m_next;
		}
		else
		{
			m_top = current->m_next;
		}				
		if (current == m_end)
		{
			m_end = prev;
		}
		delete current;
	}
}
	
void list::reverse()
{
	if (empty())
	{
		std::cout << "List empty" << std::endl;
	}

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

	if (empty())
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

void list::splice(node* k, list & m )
{
	if (m.empty())
	{
		return;
	}
	if (empty()) 
	{
		assert(k == 0);
		m_top = m.m_top;
		m_end = m.m_end;
	}
	if (k != 0)
	{ 
		if (m_end == k) 
		{
			m_end->m_next = m.m_top;
			m_end = m.m_end;
		} 
		else if (m_top == k) 
		{
			m.m_end->m_next = m_top->m_next;
			m_top->m_next = m.m_top;
		} 
		else 
		{
			m.m_end->m_next = k->m_next;
			k->m_next = m.m_top;
		}
		m.m_top = 0;
		m.m_end = 0;
	}
	else 
	{
		std::cout << "Element didn't find" << std::endl;
		return;
	}
}
