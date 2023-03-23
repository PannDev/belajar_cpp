#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int susu = 10000;
    int telur = 20000;
    int minyak = 30000;
    int jumlah;
    int total;

    system("cls");
    cout << "Selamat datang di toko kami" << endl;
    cout << "silahkan pilih barang yang ingin anda beli" << endl;
    cout << "1. susu" << endl;
    cout << "2. telur" << endl;
    cout << "3. minyak" << endl;
    int belanja; cin >> belanja;
    

    switch ( belanja ) {
        case 1:
            cout << "anda memilih susu" << endl;
            cout << "masukan jumlah = ";
            cin >> jumlah;
            total = susu * jumlah;
            cout << "total harga = " << total << endl;
            break;
        case 2:
            cout << "anda memilih telur" << endl;
            cout << "masukan jumlah = ";
            cin >> jumlah;
            total = telur * jumlah;
            cout << "total harga = " << total << endl;
            break;
        case 3 :
            cout << "anda memilih minyak" << endl;
            cout << "masukan jumlah = ";
            cin >> jumlah;
            total = minyak * jumlah;
            cout << "total harga = " << total << endl;
            break;
        default :
            cout << "pilihan tidak tersedia" << endl;
            break;
    
    }



    return 0;
}