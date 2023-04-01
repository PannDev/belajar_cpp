#include <bits/stdc++.h>
using namespace std;

void ukuran(int b, int p, int l) {
// S = (B = 10) (P = 40) (L = 90)
// M = (B = 14) (P = 60) (L = 120)
// L = (B = 18) (P = 80) (L = 180)
// (else) X = (B = 25) (P = 100) (L = 220)

(b <= 10 && p <= 40 && l <= 90) ? cout << "S" << endl 
: (b <= 14 && p <= 60 && l <= 120) ? cout << "M" << endl 
: (b <= 18 && p <= 80 && l <= 180) ? cout << "L" << endl 
: cout << "X" << endl; 
}

int main ( ) {
ios::sync_with_stdio(0);
int b, p, l; cin >> b >> p >> l;
ukuran(b, p, l);

    return 0;
}