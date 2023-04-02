#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    system ( "cls" );
    // char bintang = '*';
    // cout << "masukan tinggi segitiga = ";
    // int h; cin >> h;
    // cout << "masukan panjang segitiga = ";
    // int w; cin >> w;

    // for (int a = 0; a <= 4; a++) {
    //     for (int b = 0; b < a; b++ ) {
    //         cout << "*";
    //     }
    //     cout << "*" << endl;
    // }

    cout << "Masukan jumlah bintang = ";
    int jml; cin >> jml;

     for (int a = 0; a <= jml; a++) {
        for (int b = 0; b < a; b++ ) {
            cout << "* ";
        }
        cout << "*" << endl;
    }

    return 0;
}