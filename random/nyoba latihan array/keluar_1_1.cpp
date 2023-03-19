// Latihan keluarin array satu satu

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    // PannDev
    
    char arr[] = { '1', '2', '3', '4', '5', '6' };
    
    // i < 5 artinya keluarin 0 - 4
    // arr ke 5 tidak keluar (6)
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl; // keluarin isi didalam array
    }

    return 0;
}