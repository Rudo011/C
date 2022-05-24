#include <iostream>
#include <string>
#include <cstdlib>

class node
{
	public:
		int ID;
		std::string name;
	public:
		node(){}
		node(int x, std::string y)
			:ID(x)
			,name(y)
		{
		};
		~node()
		{
			free(node);
		}
};

int compare(const void* a, const void* b);

int main()
{
	const int num = 5;
	node array[num];
	
	array[0] = node(5, "Alen");	
	array[1] = node(2, "Dero");	
	array[2] = node(4, "Poxos");	
	array[3] = node(56, "Petros");	
	array[4] = node(32, "Manvel");	
	
	qsort(array, num-1, sizeof(node), compare);

	for (int i = 0; i < num; ++i)
	{
		std::cout << array[i].ID << " " << array[i].name << std::endl;
	}


	return 0;
}

int compare(const void* a, const void* b)
{
	const node* x = (node*) a;
	const node* y = (node*) b;
	
	if (x->ID > y->ID)
		return 1;
	else if (x->ID < y->ID)
		return -1;

	return 0;
}
