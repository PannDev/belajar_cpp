#include <bits/stdc++.h>
using namespace std;
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl

//? Rumus Broca
float beratIdeal(float tb, string gender) {
    if (gender == "Laki") {
        return (tb - 100) - ((tb - 100) * 10 / 100);
    } else {
        return (tb - 100) - ((tb - 100) * 15 / 100);
    }
}

//? Fungsi untuk menampilkan hasil berat badan ideal
void tampilHasil(float bb, float ideal) {
    if (bb < ideal) {
        cout << "Berat badan anda Kurus" nL;
    } else if (bb > ideal) {
        cout << "Berat badan anda Gemuk" nL;
    } else {
        cout << "Berat badan anda ideal" nL;
    }
    cout << "Berat badan ideal anda adalah " << ideal << " kg" nL;
}

//! solve problem
void solve() {
    float tb, bb;
    string gender;

    cout << "Program berat badan ideal" nL;
    cout << "Laki / Cewe ? ";
    cin >> gender;
    if (gender != "Laki" && "Cewe") {
        cout << "Input only Laki / Cewe.\n";
        return;
    }
    cout << "Masukkan tinggi badan (cm) = ";
    cin >> tb;
    cout << "Masukkan berat badan (kg) = ";
    cin >> bb;

    float ideal = beratIdeal(tb, gender);
    tampilHasil(bb, ideal);
}

int main() { PannDev
    solve();
    return 0;
}