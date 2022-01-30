#include <iostream>
using namespace std;
int main()
{
	int x=0;
	cout<<"Ներմուծեք եռա նկյա ն բա րձրությունը"<<endl;
	cin>>x;
	
	
	
				for (int i=0; i<x; i++)
				{
					for (int j=0;j<x-i; j++)
					{
						cout<<' ';
					}
					

				for (int j = x-2*i;j<=x;j++)
				{
					cout<<'^';
				}
			cout<<endl;
				}
		return 0;	
}
