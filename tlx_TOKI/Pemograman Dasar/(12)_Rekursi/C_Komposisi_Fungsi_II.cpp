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
int cnt[1000001], arr[1000001];

const ll mod = pow(10, 9) + 7;

int fx(int a, int b, int k, int x) {
    
    if (k == 0) return x;
    else if (k % 2 == 0) return fx(a, b, k - 1, (a * x + b) % mod);
    else return fx(a, b, k - 1, (a * x + b) % mod);
    
}

//? void
void solve() {
    
    int a, b, k, x; cin >> a >> b >> k >> x;
    cout << fx(a, b, k, x) << endl;
    
}

//! main
int main () { PannDev slv return 0; }
