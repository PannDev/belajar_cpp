#include <bits/stdc++.h>
using namespace std;
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl

//? Rumus Broca
float beratIdeal(float tb, string gender)
{
    if (gender == "Cowo")
    {
        return (tb - 100) - ((tb - 100) * 10 / 100);
    }
    else
    {
        return (tb - 100) - ((tb - 100) * 15 / 100);
    }
}

//? Fungsi untuk menampilkan hasil berat badan ideal
void tampilHasil(float bb, float ideal)
{
    cout nL;
    if (bb < ideal)
    {
        cout << "Berat badan anda Kurus" nL;
    }
    else if (bb > ideal)
    {
        cout << "Berat badan anda Gemuk" nL;
    }
    else
    {
        cout << "Berat badan anda ideal" nL;
    }
    cout << "Berat badan ideal anda adalah " << ideal << " kg" nL;
}

//! solve problem
void solve()
{
    float tb, bb;
    string gender;

    cout << "Program berat badan ideal" nL;
    cout << "Cowo / Cewe \t\t\t? ";
    cin >> gender;
    //! GUARD
    if (gender != "Cowo" && gender != "Cewe")
    {
        cout << "Input only Cowo / Cewe." nL;
        return;
    }
    cout << "Masukkan berat badan (kg) \t= ";
    cin >> bb;
    cout << "Masukkan tinggi badan (cm) \t= ";
    cin >> tb;

    //* masukin tb gender ke rumus
    float ideal = beratIdeal(tb, gender);
    //* logika kurus/ideal/gemuk
    tampilHasil(bb, ideal);
}

int main()
{
    PannDev
    solve();
    return 0;
}