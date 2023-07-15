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
#define coutn(x) cout<<x<<'\n'
#define couts(x) cout<<x<<' '
#define cout(x) cout<<x
#define cin(x) cin>>x
#define REP(i,a,b) for( int i = a; i  b; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define slv solve();

ll mod = 1000000007;

//? void
void solve() {
    
    int n, res =0; cin(n);
    int num[n];

    REP(i,0,<n) {
        cin(num[i]);
        res+=num[i];
    }

    coutn(res);
    
}

//! main
int main () { PannDev slv return 0; }
