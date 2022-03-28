#include <iostream>
#include <cassert>

#include "node.hpp"
#include "list.hpp"

list::list()
	:m_top(0)
	,m_end(0)
{
}

list::~list()
{
	node* current = this->m_top;

	while (current != 0)
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

bool list::empty()
{
	return m_top == 0;
}

node* list::find(int data)
{
	node* current = m_top;
	while(current && current->m_data != data)
	{
		current = current->m_next;
	}
	return current;
}

void list::print()
{
	if (empty())
	{
		std::cout << "List is empty" << std::endl;
		return;
	}

	node* tmp = m_top;
	while (tmp != 0)
	{
		std::cout << tmp->m_data << " ";
		tmp = tmp->m_next;
	}
	std::cout << std::endl;
}

void list::insert(node* N, int data)
{
	node* tmp = new node(data);

	if (empty())
	{
		m_top = tmp;
		m_end = tmp; 
		return;
	}

	if (N != 0)
	{
		if (N != m_end)
		{
			tmp->m_next = N->m_next;
			N->m_next = tmp;
			tmp->m_prev = N;
		}
		else 
		{
			tmp->m_next = N->m_next;
			N->m_next = tmp;
			tmp->m_prev = N;
			m_end = tmp;
		}
	}
	else 
	{
		std::cout << "Element didn't find" << std::endl;
	}
}

void list::push_front(int data)
{
	node* tmp = new node(data);

	if (empty())
	{
		m_top = tmp;
		m_end = tmp;
		return;
	}

	tmp->m_next = m_top;
	m_top->m_prev = tmp;
	m_top = tmp;
}
		
void list::push_back(int data)
{
	node* tmp = new node(data);

	if (empty())
	{
		m_top = tmp;
		m_end = tmp;
		return;
	}

	tmp->m_prev = m_end;	
	m_end->m_next = tmp;
	m_end = tmp;
}

void list::pop_front()
{
	if (empty())
	{
		return;
	}

	if (m_top == m_end)
	{
		delete m_top;
		m_end = 0;
		m_top = 0;
		return;
	}

	node* current = m_top;
	m_top = current->m_next;
	m_top->m_prev = 0;
	delete current;
}	

void list::pop_back()
{
	if (empty())
	{
		return;
	}

	if (m_top == m_end)
	{
		delete m_top;
		m_end = 0;
		m_top = 0;
		return;
	}
	
	node* tmp = m_end->m_prev;
	delete m_end;
	tmp->m_next = 0;
	m_end = tmp;
	
}

int list::size()
{
	node* current = m_top;
	int count = 0;
	
	while (current != m_end)
	{
		count++;
		current = current->m_next;
	}
	return count;
}

void list::swap(node* a, node* b)
{
	if (a && b)
	{
		int tmp = a->m_data;
		a->m_data = b->m_data;
		b->m_data = tmp;
	}
	else 
	{
		std::cout << "Element didn't find" << std::endl;
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
		while(current != 0 && current->m_next != 0)
		{
			if (current->m_data > current->m_next->m_data)
			{
				swap(current, current->m_next);
				status = true;
			}
			current = current->m_next;
		}
	}
	while(status);
}
	
void list::remove(node* N)
{
	if (empty())
	{
		return;
	}
	
	else if (N == m_top)
	{
		assert(N == m_top);
		pop_front();
		return;
	}
	
	else if (N == m_end)
	{
		assert(N == m_end);
		pop_back();
		return;
	}
	else
	{
		node* tmp = N->m_prev;
		tmp->m_next = N->m_next;
		delete N;
	}
}

void list::reverse()
{
	if (empty())
	{
		return;
	}

	node* temp = 0;
	node* current = m_top;
	m_end = m_top;
	
	while (current != 0)
	{
		temp = current->m_prev;
		current->m_prev = current->m_next;
		current->m_next = temp;
		current = current->m_prev;
	}
	if (m_top != 0)
	{
		m_top = temp->m_prev;
	}
}

void list::splice(node* N, list & m)
{
	if (m.empty())
	{
		return;
	}
	if (empty())
	{
		assert(N == 0);
		m_top = m.m_top;
		m_end = m.m_end;
	}
	if (N != 0)
	{
		if (m_end == N)
		{
			m_end->m_next = m.m_top;
			m.m_top->m_prev = m_end;
			m_end = m.m_end;
		}
		else if (m_top == N)
		{
			m.m_end->m_next = m_top->m_next;
			m_top->m_next->m_prev = m.m_end;
			m_top->m_next = m.m_top;
			m.m_top->m_prev = m_top;
		}
		else
		{
			m.m_end->m_next = N->m_next;
			N->m_next->m_prev = m.m_end;
			N->m_next = m.m_top;	
			m.m_top->m_prev = N;
		}
		m.m_top = 0;
		m.m_end = 0;
	}
}
