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
    
    // note
      // uppercase to lowercase
    // lowercase to uppercase
    string s; cin >> s;
  
    for (int i = 0; i < len(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        else s[i] += 32;
    }
    cout << s << endl;
    
}

//! main
int main () { PannDev slv return 0; }
