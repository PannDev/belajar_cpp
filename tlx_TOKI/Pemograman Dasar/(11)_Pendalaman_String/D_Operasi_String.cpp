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
void solve() {
    
    string s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;

    s1.erase(s1.find(s2), len(s2));
    s1.insert(s1.find(s3) + len(s3), s4);
    cout << s1 << endl;
    
}

//! main
int main () { PannDev slv return 0; }
