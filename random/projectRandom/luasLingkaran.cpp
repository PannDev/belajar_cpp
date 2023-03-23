#include <bits/stdc++.h>
using namespace std;
#define PI 3.14

double hitungLuas(int r) {
    return PI * r * r;
}

void tampilLuas(int r) {
    cout << "Luas Lingkaran dengan jari-jari " << r << " adalah " << hitungLuas(r) << pow(cm ,2) << endl;
}

int main( ) {
    cout << "masukan jari jari = ";
    int r; cin >> r;
    tampilLuas(r);

    return 0;
}