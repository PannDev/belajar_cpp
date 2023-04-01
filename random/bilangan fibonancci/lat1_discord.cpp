#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    // Base Case
    if (n == 0 | n == 1)
    {
        return n;
    }

    // Recursive Case
    return ( fibonacci(n - 1) + fibonacci(n - 2) );
}

int main()
{
    
    system("cls");
    cout << "Masukkan banyak fibonancci: ";
    int n; cin >> n;

    // bilangan fibonancci mulai dari 0
    for (int i = 0; i <= n; i++)
    {
        cout << fibonacci(i) << " ";
        // cout << fibonacci(n - 1) + fibonacci(n - 2) << " ";
    }

    return 0;
}