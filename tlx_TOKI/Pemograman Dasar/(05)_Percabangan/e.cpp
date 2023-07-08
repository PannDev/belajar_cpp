#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    PannDev
    
    int n; cin >> n;
    int cnt = 0;

    while (n) {
        n/= 10;
        cnt++;
    }

    if (cnt == 1) {
	cout << "satuan";
}
else if (cnt == 2) {
	cout << "puluhan";
}
else if (cnt == 3) {
	cout << "ratusan";
}
else if (cnt == 4) {
	cout << "ribuan";
}
else if (cnt == 5) {
	cout << "puluhribuan";
}
else if (1 <= n < 100.000){
	cout << "angka tidak boleh lebih dari 100.000 dan <1";
}

    return 0;
}