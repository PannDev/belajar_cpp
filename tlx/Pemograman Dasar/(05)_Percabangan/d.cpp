#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    PannDev
    
    int n; cin >> n;
    if (n > 0) {
        cout << "positif" << endl;
    } else if (n == 0) {
        cout << "nol" << endl;
    } else {
        cout << "negatif" << endl;
    }

    return 0;
}