#ifndef TREE_HPP
#define TREE_HPP

#include "node.hpp"

template <typename T>
class tree
{
	public:
		node* m_root;
	private:
		void preorder(node* root)
		{
			if (root == NULL)
			{
				return;
			}
				std::cout << root->m_data << " ";
				preorder(root->m_left);
				preorder(root->m_right);
		}
		
		int height(node* node)
		{
			if (empty())
			{
				return 0;
			}
			return node->m_height;
		}
		
		int bal(node* node)
		{
			if (empty())
			{
				return 0;
			}
			return height(node->m_left) - height(node->m_right);
		}
	public:
		tree()
			:m_root(0)
		{
		}
		void insert(const T&);
		void remove(const T&);
		void balance();
		void print();
		void getBalance();

		bool empty();

		
};

#endif
