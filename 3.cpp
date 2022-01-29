//nerkayacnel 10akan hamkargi tiv@ erkuakan hamakargum

#include <iostream>
using namespace std;

int main ()
{
    int i;
    int x;

    cout << "Nermuceq tiv: ";
    cin >> x;
    cout << "Tiv@ erkuakan hamakargum: ";

    for (i = 31; i >= 0; i--)
        {
        if ((1 << i) & x)
                {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }

    cout << endl;
return 0;
}
