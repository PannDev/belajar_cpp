#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl
using namespace std;

// prototype
void fungsi(int &);
void kuadrat(int &);

int main()
{
    PannDev int a = 5; // << value << //
    cout << "address a : " << &a nL;
    cout << "value a : " << a nL;

    //    int &b = a; // << value <<
    //    cout << "address b : " << &b nL;
    //	cout << "value b : " << b nL;

    //	fungsi(a);
    kuadrat(a);
    cout << "value a : " << a nL;

    return 0;
}

// // // //
void fungsi(int &b)
{
    b = 10;
    cout << "address b : " << &b nL;
    cout << "value b : " << b nL;
}

void kuadrat(int &valueRef)
{
    valueRef *= valueRef;
}