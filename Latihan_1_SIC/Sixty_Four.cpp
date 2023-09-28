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
   
    string s;
    cin >> s;   
    int count = 0;
    
    for (int i = s.length()-1; i >= 0; i--) {
        if (s[i] == '0') count++;
        if (count >= 6 && s[i] == '1') {
            cout << "yes\n";
            return;
        }
    }
    cout << "no\n";
    // cout << count << endl;

}

//! main
int main () { PannDev slv return 0; }