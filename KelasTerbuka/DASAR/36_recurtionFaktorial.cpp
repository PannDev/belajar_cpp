#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl
using namespace std;

// faktorial ( ! )
// 5! = 5 x 4 x 3 x 2 x 1 = 120

// faktorial ( dynamic programming )
// (n) = n x (n-1)!

// prototype
int faktorial(int n);

int main()
{
    PannDev

    int n;
    cout << "menghitung faktorial dari = ";
    cin >> n;
    cout << "nilai faktorial = " << faktorial(n) nL;

    return 0;
}

int faktorial(int n)
{
    if (n == 1)
    { // base case
        cout << n << " = ";
        return n;
    }
    else
    {
        cout << n << "*";
        return n * faktorial(n - 1); // recurtion
    }
}

// if recurtion doesn't have base case it will be segmentation fault/stack overflow.
// memory nya terlalu banyak dipakai.
// segmentation fault / tidak ada akhir.
