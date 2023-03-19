// latihan nambah per array (pakai int bilangan bulat)

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0); cin(0); cout(0);

int main() {
    // PannDev
    int n; cin >> n; // masukan panjang array
    int arr[n]; // buat array dengan panjang n

    for (int i = 0; i <= n; i++) {
        cin >> arr[i]; // masukan isi array sesuai panjang n 
        cout << " array ke " << i << " adalah " << arr[i] << endl; // keluarin isi array
    }

    int sum = 0; // ngasih tau penjumlahan dari index 0
    for (int i = 0; i <= n; i++) {
        sum += arr[i];
        // sum = 0 + arr[0] = 0 + 1 = 1
        // sum = 1 + arr[1] = 1 + 2 = 3
        // sum = 3 + arr[2] = 3 + 3 = 6
        // sum = 6 + arr[3] = 6 + 4 = 10
        // sum = 10 + arr[4] = 10 + 5 = 15
    } 
    cout << " jumlah semua array adalah " << sum << endl;

    return 0;
}