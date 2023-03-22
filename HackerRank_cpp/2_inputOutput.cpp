#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int sum(int a, int b, int c) { //function
int res = a + b + c;
return res;
}

void res(int a, int b, int c) { //procedure
    int res = sum(a, b, c);
    cout << res << endl;
}

int main(){
    // PannDev

    int a, b, c; cin >> a >> b >> c;    
    res(a, b, c); //procedure
    
    return 0;
}