#include <iostream>
using namespace std;
int main()
{int i,x;
	cout<<"Nermucel tiv  ";
	cin>>x;
	cout<<"2akan hamakargum =  ";

	for (i=31; i >= 0; i--)
	{
		if ((1 << i) & x)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
}
cout<<endl;
return 0;
}
