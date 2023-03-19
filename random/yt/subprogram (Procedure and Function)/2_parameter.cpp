#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0); cin(0); cout(0);

// function dengan parameter (string nama, string kelas)
string siswa(string nama, string kelas) {
return (nama + " adalah kelas " + kelas);
}

int main() {
    // PannDev
string nama, kelas;
//ingat string nerima input pakai getline
getline(cin, nama); 
getline(cin, kelas);
cout << siswa(nama , kelas) << endl;

    return 0;
}