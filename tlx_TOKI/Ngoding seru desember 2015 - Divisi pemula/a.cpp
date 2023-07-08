#include <bits/stdc++.h>
using namespace std;

void kelulusan (int x) {
    if (x > 200 ) {
        cout << "Lolos" << endl;
    } else {
        cout << "Tidak Lolos" << endl;
    }

}


int main ( ) {
    int a, b, c; cin >> a >> b >> c;
    int x = a + b + c;
    kelulusan(x);

    return 0;
}