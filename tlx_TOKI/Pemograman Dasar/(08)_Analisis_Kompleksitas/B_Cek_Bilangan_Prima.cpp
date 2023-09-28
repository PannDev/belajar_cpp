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
    
        int n; cin >> n;
        bool prima = 1;
        if (n == 1) prima = 0;
        else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    prima = 0;
                    return;
                }
            }
        }
        if (prima) cout << "YA" << endl;
        else cout << "BUKAN" << endl;
    
    }
    
}

//! main
int main () { PannDev slv return 0; }
