#include <bits/stdc++.h>
using namespace std;

int main () {
// s = dari beraopa
// n = berapa banyak
// d = jumlah

int s, n, d; 
cin >> s >> n >> d;

for (int i = 0; i < n; i++) {
    cout << s << endl;
    s += d;
}

return 0;
}