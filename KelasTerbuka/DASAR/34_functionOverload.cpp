#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
using namespace std;

// overloading = menimpa
// dia milih mana yg benar
// lebar (l).  Luas (L).  panjang (p)

// basic function
int rLuas(int p, int l)
{
    int L = p * l;
    return L;
}

// overload function
int rLuas(int p)
{
    int L = p * p;
    return L;
}

double rLuas(double p)
{
    return p * p; // biar cepet
}

int main()
{
    PannDev
            cout
        << "Luas kotak 2x3 : " << rLuas(2, 3) << endl;
    cout << "Luas kotak 2x2 : " << rLuas(2) << endl;
    cout << "Luas kotak 2x2 : " << rLuas(2.5) << endl;

    return 0;
}
