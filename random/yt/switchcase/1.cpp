#include <bits/stdc++.h>
using namespace std;

int main () {
cout << "silahkan pilih jenis kelamin" << endl;
cout << "1. laki-laki" << endl;
cout << "2. perempuan" << endl;
int n; cin >> n;
string jenisKelamin;

switch (n) {
case 1:
    jenisKelamin = "laki-laki";
    break;
case 2:
    jenisKelamin = "perempuan";
    break;
default:
    cout << "pilihan tidak tersedia" << endl;
    break;
}
    return 0;
}