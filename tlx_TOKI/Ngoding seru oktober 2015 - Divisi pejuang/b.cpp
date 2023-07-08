#include <bits/stdc++.h>
using namespace std;

int jam(int n) {
    return n / 3600;
}

int menit(int n) {
    return n % 3600 / 60;
}

int detik(int n) {
    return n % 60;
}

int main() {
    int n; cin >> n;
    cout << jam(n) << endl;
    cout << menit(n) << endl;
    cout << detik(n) << endl;

    return 0;
}
