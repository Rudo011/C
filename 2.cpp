#include <iostream>
#include <climits>
#include <limits>
using namespace std;


template<typename T>
void showMinMax() {
   cout << "min: " << numeric_limits<T>::min() << endl;
   cout << "max: " << numeric_limits<T>::max() << endl;
   cout << endl;
}
int main()
//{int a,b;
//	cout<<"int max is   "<< INT_MAX <<endl;
//	cout<<"int min is   "<< INT_MIN <<endl;
//	cout<<"long max is  "<< LONG_MAX <<endl;
//	cout<<"long min is  "<< LONG_MIN <<endl;
//	cout<<"double max is  "<< 
{
cout << "short:" << endl;
   showMinMax<short>();
   cout << "int:" << endl;
   showMinMax<int>();
   cout << "long:" << endl;
   showMinMax<long>();
   cout << "float:" << endl;
   showMinMax<float>();
   cout << "double:" << endl;
   showMinMax<double>();

	return 0;
}
