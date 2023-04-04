#include <bits/stdc++.h>
#define PannDev ios::sync_with_stdio(0);
using namespace std;

int fibo(int n)
{
    if (n == 0 | n == 1)
    {
        return n;
    }

    return (fibo(n - 1) + fibo(n - 2));
}

int main()
{
    PannDev int n;
    cin >> n; // masukan nilai ke-n

    for (int i = 0; i <= n; i++)
    {
        cout << fibo(i) << " ";
    }
}