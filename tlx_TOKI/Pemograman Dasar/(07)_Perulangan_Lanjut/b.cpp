#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL <<endl
using namespace std;

int main ( ) {
    int n; cin >> n;

    for (int i = 1; i <= n; i++)
        {
            for (int j = n; j > i; j--)
            {
                cout << " ";
            }
            for (int k = 1; k <= i; k++)
            {
                cout << "*";
            }
            cout nL;;
        }

    return 0;
}