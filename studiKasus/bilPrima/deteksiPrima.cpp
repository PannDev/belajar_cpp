#include <bits/stdc++.h>
using namespace std;
#define PannDev ios::sync_with_stdio(0);
#define nL <<endl

int main() { PannDev

    int num; cout << "input number = "; cin >> num;
    int mod = 0;

    //? i = num
    for (int i = num; i > 0; i--) {
        int res = num % i;
        if ( res == 0 ) {
            mod++;
        }
    }
    if (mod == 2) {
        cout << num << " prima" nL;
    } else {
        cout << num << " not prima" nL;
    }


    return 0;
}