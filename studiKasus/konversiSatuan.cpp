#include <bits/stdc++.h>
#include <array>
using namespace std;
#define PannDev ios_base::sync_with_stdio(0);
#define nL <<endl

int main () {
    PannDev
    // n 7
    // i = 0 - 6

    string satuan[] = {"km", "hm", "dam", "m", "dm", "cm", "mm"};
    string awal = "km";

    int n = sizeof(satuan)/sizeof(*satuan);
    // cout << n nL;

    for (int i = 0; i < n; i++) {
        if(awal == satuan[i]){
            cout << "urutan ke - " << i+1;
        }
    }

    return 0;
}