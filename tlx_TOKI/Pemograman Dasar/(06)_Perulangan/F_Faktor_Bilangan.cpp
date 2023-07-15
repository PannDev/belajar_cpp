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

ll mod = 1e9+7;

//? void
void solve() {
    
    int n; cin(n);

    // Petunjuk
    // Gunakan for dari N hingga 1. Jika bilangan tersebut habis membagi N, maka cetak bilangan tersebut. Bilangan a habis dibagi bilangan b jika a mod b = 0.
    for (int i = n; i > 0; i--) {
        if (n % i == 0) {
            coutn(i);
        }

        // coutn(i);
    }

    // 9 % 9 == 0 (9  )
    // 9 % 8 == 1 (no)
    // 9 % 7 == 2 (no)
    // 9 % 6 = 3 (no)
    // 9 % 5 == 4 (no)
    // 9 % 4 = 5 (no)
    // 9 % 3 == 0 (3   )
    // 9 % 2 == 1 (no)
    // 9 % 1 == 0 (1  )
    
}

//! main
int main () { PannDev slv return 0; }
