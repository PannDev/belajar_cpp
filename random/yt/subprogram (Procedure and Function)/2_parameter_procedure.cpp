#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0); cin(0); cout(0);

void siswa(string nama, string kelas) {
    cout << nama << " adalah kelas " << kelas << endl;
}

int main() {
    // PannDev

    string nama, kelas;
    // ingat string nerima input pakai getline
    getline(cin, nama);
    getline(cin, kelas);
    siswa(nama, kelas);

    return 0;
}