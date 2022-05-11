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

template <typename T>
node* newNode(T data)
{
	node* tmp = new node();
	tmp->m_data = data;	
	tmp->m_left = 0;
	tmp->m_right = 0;
	tmp->m_height = 1;
	
	return (tmp);
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
node *deleteNode(node *root, T key) 
{
	if (root == NULL)
	{
		return root;
	}
	if (key < root->m_data)
	{
		root->m_left = deleteNode(root->m_left, key);
	}
	else if (key > root->m_data)
	{
		root->m_right = deleteNode(root->m_right, key);
	}
	else 
	{
		if ((root->m_left == NULL) || (root->m_right == NULL)) 
		{
      			node *temp = root->m_left ? root->m_left : root->m_right;
      			if (temp == NULL) 
			{
        			temp = root;
        			root = NULL;
      			} 
			else
			
				*root = *temp;
      				free(temp);
    		} 
		else 
		{
      			node *temp = minNode(root->m_right);
      			root->m_data = temp->m_data;
    			root->m_right = deleteNode(root->m_right, temp->m_data);
    		}
  	}

	if (root == NULL)
	return root;

	root->m_height = 1 + Max(height(root->m_left), height(root->m_right));
  	int balanceFactor = getBalance(root);
  	if (balanceFactor > 1) 
	{
    		if (getBalance(root->m_left) >= 0) 
		{
      			return rightRotate(root);
   		} 
		else 
		{
      			root->m_left = leftRotate(root->m_left);
      			return rightRotate(root);
    		}
  	}
  	if (balanceFactor < -1) 
	{
    		if (getBalance(root->m_right) <= 0) 
		{
      			return leftRotate(root);
    		} 
		else 
		{
      			root->m_right = rightRotate(root->m_right);
      			return leftRotate(root);
    		}
  	}
  	return root;
}

template <typename T>
node *insertNode(node *node, T key) 
{
  	if (node == NULL)
	{
		return newNode(key);
	}
  	if (key < node->m_data)
	{
    		node->m_left = insertNode(node->m_left, key);
	}
  	else if (key > node->m_data)
	{
    		node->m_right = insertNode(node->m_right, key);
	}
  	else
    	return node;

  	node->m_height = 1 + Max(height(node->m_left), height(node->m_right));
  	int balanceFactor = getBalance(node);
 
 	if (balanceFactor > 1) 
	{
   		if (key < node->m_left->m_data) 
		{
      			return rightRotate(node);
    		} 
		else if (key > node->m_left->m_data) 
		{
      			node->m_left = leftRotate(node->m_left);
      			return rightRotate(node);
    		}
  	}
  	if (balanceFactor < -1) 
	{
    		if (key > node->m_right->m_data) 
		{
      			return leftRotate(node);
  		} 
		else if (key < node->m_right->m_data) 
		{
      			node->m_right = rightRotate(node->m_right);
      			return leftRotate(node);
    		}
  	}
  	return node;
}
