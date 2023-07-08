#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    int a, b ,c, k; // a b c angka
    // if k = 0 { besar ke kecil }
    // if k = 1 { kecil ke besar }
    cin >> a >> b >> c >> k;
    int angka[3] = {a, b, c};
    
    for (int i = 0; i < 3; i++) {

        for (int j = i + 1; j < 3; j++) {

            if (angka[i] > angka[j]) {
            swap(angka[i], angka[j]);
            }
            // angka[0] > angka[1] 
            // swap(angka[0], angka[1])
        }
    } 

    if (k == 0) {
        cout << angka[2] << " " << angka[1] << " " << angka[0] << endl;
    } else {
        cout << angka[0] << " " << angka[1] << " " << angka[2] << endl;
    }


    return 0;
}