#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl
using namespace std;

int main()
{
    PannDev int a = 5; // int a mempunyai nilai dan address

    // pointer
    //    int *aP = &a;

    int *aP = nullptr;
    aP = &a;

    cout << "ini adalah nilai dari a : " << a nL;
    cout << "alamat dari &a : " << &a nL;                // ambil address pakai ( & )
   //    cout << "alamat dari int *aP = &a : " << aP nL; // int *aP = &a;
    cout << "alamat dari int *aP = nullptr : " << aP nL; //

    // dereferencing [ mengambil data dari sebuah pointer ]
    cout << "mengambil data dari sebuah pointer *aP : " << *aP nL; // kaya on off

    // pointer = alamat
    // kepakai ketika function menggunakan pointer

    return 0;
}