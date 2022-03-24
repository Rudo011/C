#ifndef NODE_HPP
#define NODE_HPP

class node
{
	public:
		int m_data;
		node* m_next;
		node* m_prev;
		node();
		node(int);
};

#endif
