#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0); cin(0); cout(0);

// sub program
// procedure (tidak mengembalikan nilai) void
// function (mengembalikan nilai) int, float, double, char, string, bool

// procedure
void siswa() {
    string nama = "PannDev";
    string gender = "cowo";
    cout << nama << " adalah seorang " << gender << endl;
}

// function
string siswi() {
    string nama = "naila";
    string gender = "cewe";
    return (nama + " adalah seorang " + gender);
}

int main() {
    siswa(); // memanggil procedure
    cout << siswi() << endl; // memanggil function
}