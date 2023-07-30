//? Header Files and namespaces
#include<bits/stdc++.h>
using namespace std;

//? Code Shortners
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define POP pop_back
#define len(s) (int)s.size()
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define slv solve();

ll mod = 1e9+7;

//? sudut
string sudut (int a, int b, int c) {
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        return "siku-siku";
    } else if ( a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a ) {
        return "tumpul";
    } else {
        return "lancip";
    }
    
}

//? sisi 
string sisi (int a, int b, int c) {
    if ( (a == b && b == c) ) {
        return " sama sisi";
    } else if ( a == b || a == c || b == c) {
        return " sama kaki";
    } else {
        return " sembarang";
    }
}

//? void
void solve() {
    
    int a, b, c; cin >> a >> b >> c;

    //? sudut (x)
    string x = sudut(a, b, c);
    //? sisi (y)
    string y = sisi(a, b, c);

    cout << "segitiga " << x << y << endl;
        
    
}

//! main
int main () { PannDev slv return 0; }
