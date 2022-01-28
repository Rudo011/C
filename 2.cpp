//xndir tpel shorti, longi, inti, floati ev doublei minimal ev maximal arjeqner@

#include <iostream>
#include <limits>
using namespace std;


template<typename T>
void showMinMax() {
   cout << "min: " << numeric_limits<T>::min() << endl;
   cout << "max: " << numeric_limits<T>::max() << endl;
   cout << endl;
}
int main()
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
