//? Header Files and namespaces
#include<bits/stdc++.h>
using namespace std;

//? Code Shortners
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<'\n'
#define REP(i,a,b) for( int i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1000000007;

//! main
int main () { PannDev

    int n, m, s; cin >> n >> m >> s;
    
    // n = jumlah anak
    // m = jumlah permen
    // s = anak pertama yang dapat permen

    
    int rem = m % n;
    int ans;

    if (rem == 0) {
        ans = (s + n - 1) % n;
        if (ans == 0) ans = n;
    } else {
        ans = (s + rem - 1) % n;
        if (ans == 0) ans = n;
    }

    print(ans);


   return 0;
}
