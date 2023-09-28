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

//? void
int inv(int x) {
    int copyX = x; int ans = 0;
    while (copyX > 0) {
        ans = ans * 10 + copyX % 10;
        copyX /= 10;
    }
    return ans;
    
}

//! main
int main () { PannDev 

int a, b; cin >> a >> b;
cout << inv(inv(a) + inv(b)) << endl;

 return 0; }
