#include <bits/stdc++.h>
// # include <string> // STL
using namespace std;

#define PannDev std::ios_base::sync_with_stdio(0);
#define nL << endl

int main()
{
    PannDev

        // ini dari STL <string>
        string kalimat_1("Dayat suka olahraga supaya sehat");
    string kalimat_2("Ucup suka makan pisang di malam hari");

    cout << "1: " << kalimat_1 nL;
    cout << "2: " << kalimat_2 nL;

    // substring ( mengambil string di tengah tengah )
    // substr( index, panjang/ambil berapa huruf)
    cout nL;
    cout << ".substr(11,8) : " << kalimat_1.substr(11, 8) nL; // olahraga
    cout << ".substr(16,6) : " << kalimat_2.substr(16, 6) nL; // pisang

    // mencari posisi substring
    cout nL;
    cout << ".find(olahraga) berada di index : " << kalimat_1.find("olahraga") nL; // index di 11
    cout << ".find(pis) berada di index : " << kalimat_2.find("pis") nL;           // index di 16

    cout nL;
    int a = kalimat_1.find("a");
    cout << "kalimat_1.find(a) " << a nL;
    cout nL;
    cout << kalimat_1.find("a", a + 1) nL;
    cout nL;

    // mencari posisinya dari belakang
    cout << kalimat_2.rfind("an") nL;
    cout << kalimat_2.rfind("i") nL;

    return 0;
}
