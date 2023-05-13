#include <bits/stdc++.h>
using namespace std;
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl

void solve()
{
    int nilai;
    cout << "masukan nilai (0-100) = ";
    cin >> nilai;
    if (nilai > 100)
    {
        cout << "LULUS KEREN DIATAS 100 BRO..." nL;
    }
    else if (nilai >= 75)
    {
        cout << "lulus bro." nL;
    }
    else
    {
        cout << "tidak lulus" nL;
    }
}

int main()
{
    PannDev
    solve();

    return 0;
}