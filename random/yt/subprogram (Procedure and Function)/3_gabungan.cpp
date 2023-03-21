#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// function lulus dan parameter nilai
bool lulus(int nilai) {
if (nilai > 75) {
    return true;
} else {
    return false;
}
}

// procedure data_siswa dan parameter string nama dan nilai 
void data_siswa(string nama, int nilai) {
    lulus(nilai);
    cout << "nama : " << nama << endl; 
    cout << "nilai : " << nilai << endl; 
    cout << "status : ";
    if ( lulus(nilai) ) {
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak Lulus" << endl;
    }
}

int main(){
    // PannDev
    
    string nama; int nilai;
    cout << "masukan nama : ";
    getline(cin, nama);
    cout << "masukan nilai : ";
    cin >> nilai;
    cout << endl;
    data_siswa(nama, nilai);

    return 0;
}