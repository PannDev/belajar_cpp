#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
using namespace std;

int x = 10; // var global

int getGlobal()
{
    return x; // mengambil var global
}

int x_local()
{
    int x = 5; // var local scopenya x_local()
    return x;
}

int main()
{
    PannDev

    cout << "1. Global var = " << x << endl; // 10

    //	x = 8; 3. output 8
    int x = 8;                               // 3. output 10  // var local untuk main
    cout << "2. Local main = " << x << endl; // 8

    cout << "3. getGlobal() = " << getGlobal() << endl; // 10

    cout << "4. Local main = " << x << endl; // 8

    cout << "5. x_local() = " << x_local() << endl; // 5

    cout << "6. Local main = " << x << endl; // 8

    cout << "7. Local main = " << x << endl; // 8
    //	if (true)
    {
        cout << "8. Local main = " << x << endl; // 8
        // block scope
        int x = 1;
        cout << "9. Local block = " << x << endl;            // 1
        cout << "10. getGlobal() = " << getGlobal() << endl; // 10
    }
    cout << "11. Local main = " << x << endl; // 8

    return 0;
}
