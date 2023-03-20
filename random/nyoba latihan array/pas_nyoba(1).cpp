// buat panjang array
// minta isi array sesuai panjang array
// tampilkan semua isi array nya

// minta input ke user untuk mau keluarin array ke brp?
// hasil penjumlahan semua array


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
//    PannDev

int n; cin >> n; // nanya panjang array ke user
int arr[n]; // inisialisasi panjang arr sebanyak n
int panjang = sizeof(arr) / sizeof(arr[0]);
cout << "Okee, Panjang Array = " << panjang << endl;

for (int i = 0; i<=n; i++) {
		cin >> arr[i];
		cout << "array ke " << i << " adalah " << arr[i] << endl;
} cout << endl;

cout << " mau keluarin array ke berapa? "; int i; cin >> i;
cout << "okee array ke " << i << " = " << arr[i] << endl;
cout << endl;

int sum = 0;
for (int i = 0; i<=n; i++) {
	sum += arr[i];
}
cout << "Hasil Penjumlahan Semua Array = " << sum << endl;

    return 0;
}