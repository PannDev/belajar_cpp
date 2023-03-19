// Latihan keluarin data array ke n
// panjang array dan isi array dari user

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0); cin(0); cout(0);

int main() {
    // PannDev
    int n; cin >> n; // masukan panjang array
    char arr[n]; // buat array dengan panjang n

    for (int i = 0; i <= n; i++) {
        cin >> arr[i]; // masukan isi array
        cout << " array ke " << i << " adalah " << arr[i] << endl; // keluarin isi array
    }
    cout << " panjang array adalah " << sizeof(arr) << endl << endl; // keluarin panjang array
    cout << "mau keluarin array ke berapa? "; int x; cin >> x;
    cout << " array ke " << x << " adalah " << arr[x] << endl; // keluarin isi array ke x



    return 0;
}