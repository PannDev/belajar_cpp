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
#define REP(i,a,b) for( int i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define slv solve();

ll mod = 1000000007;

//? void
void solve() {
    
    double n; cin(n);
    // double truncN = trunc(n); //!doesnt work
    int floor = n, ceil = n;

    if(n == int(n)) { //! handle if 1.0 == 1 
        coutn(floor<<" "<<ceil);
    } else if (n < 0) {
        coutn(floor - 1<<" "<<ceil);
    } else if (n > 0) {
        coutn(floor<<" "<<ceil + 1);
    }
    
}

//! main
int main () { PannDev slv return 0; }
