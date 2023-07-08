#include <bits/stdc++.h>
using namespace std;

void nilaiUTS (int n) {
    ( n >= 0 && n <= 100 ) ? cout << "YA" << endl : cout << "TIDAK" << endl;
}

int main ( ) {
    ios::sync_with_stdio(false);
    int n; cin >> n;
    nilaiUTS(n);

    return 0;
}