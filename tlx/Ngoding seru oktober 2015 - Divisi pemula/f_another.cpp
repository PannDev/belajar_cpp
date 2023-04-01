#include <bits/stdc++.h>
using namespace std;

char size(int b, int p, int l) {
    if (tie(b, p, l) <= make_tuple(10, 40, 90)) return 'S';
    if (tie(b, p, l) <= make_tuple(14, 60, 120)) return 'M';
    if (tie(b, p, l) <= make_tuple(18, 80, 180)) return 'L';
    return 'X';
}

int main() { 
int b, p, l; cin >> b >> p >> l;
cout << size(b, p, l) << endl;

    return 0;
}