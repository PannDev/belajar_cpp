#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


// function tampilLuas
double hitungLuas(double s) {
    double L = s * s;
    return L;
}

// function hitungKeliling
double hitungKeliling(double s) {
    double K = 4 * s;
    return K;
}

// procedure tampilLuas
void tampilLuas (double s) {
    double L = hitungLuas(s);
    cout << "Luas : " << endl;
    cout << "L \t : s x s" << endl;
    cout << "L \t : " << s << " x " << s << endl;
    cout << "L \t : " << L << endl;
}

// procedure tampilKeliling
void tampilKeliling (double s) {
    double K = hitungKeliling(s);
    cout << "Keliling : " << endl;
    cout << "K \t : 4 x s" << endl;
    cout << "K \t : " << "4" << " x " << s << endl;
    cout << "K \t : " << K << endl;
}

int main () {

    cout << "masukan sisi : ";
    double s; cin >> s;
    tampilLuas(s);
    tampilKeliling(s);


    return 0;
}