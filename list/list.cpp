#include <iostream>
#include <cassert>

#include "list.hpp"
#include "node.hpp"

list::list()
	: m_top(0)
	, m_end(0)
{
}

void list::front()
{
	std::cout << "First element - " << m_top << std::endl;
}

void list::back()
{
	std::cout << "Last element - " << m_end << std::endl;
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

void list::insert(int k, int m_data)
{
	node* tmp = new node(m_data);
	if (empty())
	{
		m_top = tmp;
		m_end = tmp;
		return;
	}

	node* current = m_top;
	node* next = 0;

	while (current && current->m_data != k )
	{
		next = current->m_next;
		current = current->m_next;
	}
	if(current)
	{
		assert(current->m_data == k);
		next = current->m_next;
		current->m_next = tmp;
		tmp->m_next = next;
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

void list::swap(int a, int b)
{
	node* current = m_top;
	node* current_1 = m_top;
	
	while (current->m_data != a)
	{
		current = current->m_next;
	}
	while (current_1->m_data != b)
	{
		current_1 = current_1->m_next;
	}
	if (current && current_1)
	{
		assert(current->m_data == a);
		assert(current_1->m_data == b);
			
		current->m_data = b;
		current_1->m_data = a;
	}
}
	
void list::swap_node(node* a, node* b)
{
		int temp = a->m_data;
		a->m_data = b->m_data;
		b->m_data = temp;
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
				swap_node(current, current->m_next);
				status = true;
			}
			current = current->m_next;
		}
	}
	while(status);
}

void list::find(int k)
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

void list::remove(int k)
{
	if (empty())
	{
		return;
	}
	node* current = m_top;
	node* prev = 0;	

	while ( current != 0 && k != current->m_data) 
	{
		prev = current;
		current = current->m_next;
	}

	if (current)
	{
		assert(current->m_data == k);
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

	if ( m_end->m_data == k )
	{
		m_end->m_next = m.m_top;
		m_end = m.m_end;
		return;
	}

	while (current != 0 && k != current->m_data)
	{
		std::cout << "efwe" << std::endl;	
		prev = current;
		current = current->m_next;
		next = current->m_next;
	}

	if(current)
	{
		assert(current->m_data == k);
		m.m_end->m_next = current->
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
