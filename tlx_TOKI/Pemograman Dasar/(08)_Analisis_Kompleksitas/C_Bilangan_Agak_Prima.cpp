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
#define len(s) s.size()
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define slv solve();

const ll mod = pow(10, 9) + 7;

//? void
void solve() {
    
    int t; cin >> t;
    while (t--) {
    
        int b; cin >> b;
        int cnt = 0;
        for (int j = 1; j*j <= b; j++) {
            if (b % j == 0) {
                int b1 = b;
                int b2 = b/j;
                if (b1 == b2) cnt++;
                else cnt+=2;
            }
        }
        if (cnt <= 4) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
    }
    
}

//! main
int main () { PannDev slv return 0; }
