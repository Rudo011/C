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
	m_root = insertNode(m_root, data);
}
	
template <typename T>
void tree<T>::remove(const T& data)
{
	m_root = deleteNode(m_root, data);
}

template <typename T>
int tree<T>::getBalance()
{
	int a = bal(m_root);

	return a;
}
