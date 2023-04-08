#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl
using namespace std;

int main()
{
    PannDev

        // looping untuk array di c++11 keatas
        /*
            for(deklarasi var : array) {
            statement
            )
        */

        //	int arrNilai[10] = {0,1,2,3,4,5,6,7,8,9};
        array<int, 10>
        arrNilai = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // cara lama
    //	for(int i =0; i<10; i++) {
    //		cout << arrNilai[i] nL;
    //	}

    for (int nilai : arrNilai)
    {
        //	cout << nilai nL;
        cout << "address = " << &nilai << " nilainya : " << nilai nL;
        nilai = 1; // tidak merubah array
    }
    cout nL;

    // memanipulasi array dengan menggunakan referensi
    for (int &nilaiRef : arrNilai)
    {
        nilaiRef *= 2;
    }
    cout nL;

    for (int &nilaiRef : arrNilai)
    {
        cout << "address = " << &nilaiRef << " nilainya : " << nilaiRef nL;
    }

    return 0;
}
