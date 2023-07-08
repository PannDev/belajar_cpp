#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    // PannDev   
    int n; cin >> n; // 8

    while ( n%2 == 0 ) { // ketika n habis dibagi 2
    n /= 2; // maka n dibagi 2
    }
    //logika while ( 8 adalah pangkat 2 )
    // 8 % 2 == 0 maka 8 / 2 = 4
    // 4 % 2 == 0 maka 4 / 2 = 2
    // 2 % 2 == 0 maka 2 / 2 = 1 (keluar loop)
    //masuk ke n=1 "ya"

    //logika while (6 bukan pangkat 2 ) 
    // 6 % 2 == 0 maka 6 / 2 = 3
    // 3 % 2 != 0 maka keluar loop
    // masuk ke else "tidak"

    if (n==1) {
        cout << "ya" << endl;
    } else {
        cout << "bukan" << endl;
    }

    return 0;
}