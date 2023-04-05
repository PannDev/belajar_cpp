#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl
using namespace std;

int fibonancci(int n)
{
    if (n == 0 || n == 1)
    { // base case
        return n;
    }

    // recurtion
    return fibonancci(n - 1) + fibonancci(n - 2);
}

void solve(int n)
{
    cout << "Deret Fibonancci = ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonancci(i) << " ";
    } cout nL;
    cout << "Hasil penjumlahan bilangan ke-n = " << fibonancci(n) nL;
}

int main()
{
    PannDev
    cout << "masukan bilangan ke-n : ";
    int n;
    cin >> n;

    solve(n);

    return 0;
}

// cara ini tidak efektif 
// jika input 1000 maka akan membutuhkan waktu lama, mungkin bisa segmentation fault ?

// fibo recurtion = efisien. but ga efektif.
// fibo iteration = efektif. but ga efisien.