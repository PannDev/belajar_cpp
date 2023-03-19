// Latihan keluarin array 1 1
// panjang array dan data array dari user

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0); cin(0); cout(0);

int main() {
    // PannDev
    int n; cin >> n; // masukin panjang array
    char arr[n]; // inisialisasi panjang array sesuai n
    
    for(int i = 0; i <= n; i++) {
        cin >> arr[i]; // masukin data array
        cout << arr[i] << endl; // keluarin isi didalam array
    }

    

    return 0;
}
