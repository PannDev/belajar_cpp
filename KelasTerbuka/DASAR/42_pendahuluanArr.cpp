#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl
using namespace std;

int main()
{
    PannDev int nilai[5] = {0, 1, 2, 3, 4};
    //	nilai[0] = 0;
    //	nilai[1] = 1;
    //	nilai[2] = 2;
    //	nilai[3] = 3;
    //	nilai[4] = 4;

    // hexadecimal ?
    cout << &nilai[0] << " nilainya adalah = " << nilai[0] nL;
    cout << &nilai[1] << " nilainya adalah = " << nilai[1] nL;
    cout << &nilai[2] << " nilainya adalah = " << nilai[2] nL;
    cout << &nilai[3] << " nilainya adalah = " << nilai[3] nL;
    cout << &nilai[4] << " nilainya adalah = " << nilai[4] nL;
    // array dengan address berurutan

    int *ptr = nilai;
    *(ptr + 2) = 6; // 0 + 4
    // 1 int = 4 byte

    nilai[3] = 7;

    cout nL;
    cout << &nilai[0] << " nilainya adalah = " << nilai[0] nL;
    cout << &nilai[1] << " nilainya adalah = " << nilai[1] nL;
    cout << &nilai[2] << " nilainya adalah = " << nilai[2] nL;
    cout << &nilai[3] << " nilainya adalah = " << nilai[3] nL;
    cout << &nilai[4] << " nilainya adalah = " << nilai[4] nL;

    cout nL;
    cout << "ukuran array = " << sizeof(nilai) << " byte " nL;
    ''
        // 5 member = 5 * 4 byte = 20 byte
        cout
        << "jumlah member arr = " << sizeof(nilai) / sizeof(int) nL;

    return 0;
}
