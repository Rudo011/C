#include <cassert>

#include "tree.hpp"
#include "node.hpp"

template <typename T>
bool tree<T>::empty()
{
	return m_root == NULL;
}

template <typename T>
void tree<T>::print()
{
	if (empty())
	{
		return;
	}
	preorder(m_root);
	std::cout << std::endl;
}

template <typename T>
void tree<T>::insert(const T& data)
{
	m_root = inserter(m_root, data);
}
	
template <typename T>
void tree<T>::remove(const T& data)
{
	m_root = deleter(m_root, data);
}

template <typename T>
void tree<T>::getBalance()
{
	if (empty())
	{
		return;
	}
	int a = bal(m_root);
	std::cout << "Balance = " << a << std::endl;
}
