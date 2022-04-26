#include "node.hpp"
#include "tree.hpp"
	
node::node()
	:m_data(0)
	,m_left(0)
	,m_right(0)
	,m_height(0)
{
}

template <typename T>
node::node(T data)
	:m_data(data)
	,m_left(0)
	,m_right(0)
	,m_height(0)
{	
}

int Max(int a, int b)
{
	return (a>b) ? a : b;
}
	
int height(node* node)
{
	if (node == NULL)
	{
		return 0;
	}
	return node->m_height;
}
	
int getBalance(node* node)
{
	if (node == NULL)
	{
		return 0;
	}
	return height(node->m_left) - height(node->m_right);
}

node* rightRotate(node* y)
{
	node* x = y->m_left;
	node* T2 = x->m_right;
	x->m_right = y;
	y->m_left = T2;

	y->m_height = Max(height(y->m_left), height(y->m_right)) + 1;
	x->m_height = Max(height(x->m_left), height(x->m_right)) + 1;
		
	return x;
}
	
node* leftRotate(node* x)
{
	node* y = x->m_right;
	node* T2 = y->m_left;
	y->m_left = x;
	x->m_right = T2;

	x->m_height = Max(height(x->m_left), height(x->m_right)) + 1;
	y->m_height = Max(height(y->m_left), height(y->m_right)) + 1;
	
	return y;
}

template <typename T>
node* inserter(node* tmp, T data)
{
	if (tmp == NULL)
	{
		return new node(data);
	}
	if (data < tmp->m_data)
	{
		tmp->m_left = inserter(tmp->m_left, data);
	}
	else
	{
		tmp->m_right = inserter(tmp->m_right, data);
	}

	tmp->m_height = 1 + Max(height(tmp->m_left), height(tmp->m_right));
	int balance = getBalance(tmp);
	
	if (balance > 1)
	{
		if (data < tmp->m_left->m_data)
		{
			return rightRotate(tmp);
		}	
		else if (data > tmp->m_left->m_data)
		{
			tmp->m_left = leftRotate(tmp->m_left);	
			return rightRotate(tmp);
		}
	}

	if (balance < -1)
	{
		if (data > tmp->m_right->m_data)
		{
			return leftRotate(tmp);
		}
		else if (data < tmp->m_right->m_data)
		{
			tmp->m_right = rightRotate(tmp);
			return leftRotate(tmp);
		}
	}
	
	return tmp;
}

node* minNode(node* tmp)
{
	node* current = tmp;
	while (current->m_left != NULL)
	{
		current = current->m_left;
	}
	return current;
}

template <typename T>
node* deleter(node* tmp, T data)
{
	if (tmp == NULL)
	{
		return tmp;
	}
	if (data < tmp->m_data)
	{
		tmp->m_left = deleter(tmp->m_left, data);
	}
	else if (data > tmp->m_data)
	{
		tmp->m_right = deleter(tmp->m_right, data);
	}	
	else
	{
		if ((tmp->m_left == NULL) || (tmp->m_right == NULL))
		{
			node* temp = tmp->m_left ? tmp->m_left : tmp->m_right;
		
			if (temp == NULL)
			{
				temp = tmp;
				tmp = NULL;
			}
			else 
			{
				*tmp = *temp;
			}
			delete temp;
		}
		else 
		{
			node* temp = minNode(tmp->m_right);
			tmp->m_data = temp->m_data;
			tmp->m_right = deleter(tmp->m_right, temp->m_data);
		}
	}

	if (tmp == NULL)
	{
		return tmp;
	}

	tmp->m_height = 1 + Max(height(tmp->m_left), height(tmp->m_right));
	int balance = getBalance(tmp);
	
	if (balance > 1)
	{
		if (data < tmp->m_left->m_data)
		{
			return rightRotate(tmp);
		}	
		else if (data > tmp->m_left->m_data)
		{
			tmp->m_left = leftRotate(tmp->m_left);	
			return rightRotate(tmp);
		}
	}

	if (balance < -1)
	{
		if (data > tmp->m_right->m_data)
		{
			return leftRotate(tmp);
		}
		else if (data < tmp->m_right->m_data)
		{
			tmp->m_right = rightRotate(tmp);
			return leftRotate(tmp);
		}
	}
	
	return tmp;

}
