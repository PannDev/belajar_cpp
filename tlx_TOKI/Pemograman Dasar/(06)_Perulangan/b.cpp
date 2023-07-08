#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    PannDev
    
    int n; cin >> n;
    int b[n]; //b ke n (buat array)
    int hasil = 0; // jumlah dari array 0

for (int i=1; i <= n; i++) {
	cin >> b[i]; // masukin array b sampai n
}

for (int j=1; j<=n; j++) {
	hasil += b[j]; //jumlah 1 1 dari arr 0
}

cout << hasil << endl;
    return 0;

}