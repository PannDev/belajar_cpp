#include <bits/stdc++.h>
// # include <string> // STL
using namespace std;

#define PannDev std::ios_base::sync_with_stdio(0);
#define nL << endl

int main()
{
    PannDev
    // tidak ada ide kata ngikut Kelas Terbuka Aja

        // ini dari STL <string>
        string kalimat_1("aku suka kamu suka, siapa? dia!");
    string kalimat_2("wakanda forevah!!!");

    cout << "data string" nL;
    cout << "1: " << kalimat_1 nL;
    cout << "2: " << kalimat_2 nL nL;

    // swap string
    cout << "swap string" nL;
    kalimat_1.swap(kalimat_2);
    cout << "1: " << kalimat_1 nL;
    cout << "2: " << kalimat_2 nL nL;

    // replace string
    // replace(index, ambil berapa huruf)
    kalimat_2.replace(27, 3, "otong");

    int posisi = kalimat_1.find("ah");
    // find and replace
    kalimat_1.replace(
        kalimat_1.find("ah"), 2, "ER");
    //	kalimat_1.replace(posisi,3,"ah");

    cout << "replace string" nL;
    cout << "1: " << kalimat_1 nL;
    cout << "2: " << kalimat_2 nL nL;

    // insert string
    kalimat_1.insert(8, "dan hatiku ");
    cout << "insert string" nL;
    cout << "1: " << kalimat_1 nL;
    cout << "2: " << kalimat_2 nL;

    return 0;
}
