#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
cout << "Sigma Pengurangan" << " " << "code by PannDev" << endl << endl;
// nanya nanya ke user
cout << "Masukan Batas Atas (n) = ";
int i; cin >> i;
cout << "Masukan Index Penjumlahan (i) = ";
int n; cin >> n;
cout << "Formula = ";
int f; cin >> f;
cout << "okee jadi formulanya " << "("<< f << " - " << i << ")" << " ditambah sampai " << "(" << f << " - " << n << ")"<< endl << endl;

// logika disini
int sum = 0;
for (int x = n; x <= i; x++) {
  cout << "(" << f << " - " << x << ") + ";
}
cout << endl;

for (; n <= i; n++) {
  cout << (f - n) << " + ";
  sum += (f - n);
}

cout << endl;
cout << "Jawabannya = " << sum << " cuy" << endl;

return 0;
}