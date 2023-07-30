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

ll sumMod (ll a, ll b) {
    return ( (a % mod) + (b % mod) % mod ); 
}

//? void
void solve() {
    
    ll a, b; cin >> a >> b;

    cout << sumMod(a,b) << endl;
    
}

//! main
int main () { PannDev slv return 0; }
