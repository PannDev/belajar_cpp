#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    // PannDev
    
    string nameNum[] = {
        "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    int input; cin >> input;
    // pakai if kepanjangan malas
    string res = (input <= 9) ? nameNum[input - 1] : "Greater than 9" ;
    cout << res << endl;

    return 0;
}