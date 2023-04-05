#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl
using namespace std;

void fungsi(int *);
void kuadrat(int *);

void fungsi(int *b)
{
    cout << "address b : " << b nL;
    cout << "value b : " << *b nL; // dereferencing
}

void kuadrat(int *valPtr)
{
    *valPtr = (*valPtr) * (*valPtr);
}

int kuadrat(int value)
{ // ga efesien int value ga kepake lg
    return value * value;
}

int main()
{
    PannDev int a = 5; // << value << //
    cout << "address a : " << &a nL;
    cout << "value a : " << a nL;
    // fungsi(&a); // fungsi dengan input pointer

    kuadrat(&a);

    a = kuadrat(a); // ga efisien
    cout << "value a " << &a nL;

    return 0;
}