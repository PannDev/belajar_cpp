#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    // PannDev
    
    int n, k; cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        if(i > 1) {
            cout << " ";
        }
        if (i % k == 0) {
            // 1 % 3 = 1
            // 2 % 3 = 1
            // 3 % 3 = 0
            cout << "*";
        } else {
            cout << i;
        }
    }

    cout << endl;

    return 0;
}