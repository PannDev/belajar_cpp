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

const ll mod = pow(10, 9) + 7;


//? void
void solve() {

    ull n, m; cin >> n >> m;

    if(m%n) {
        cout << -1 << endl;
        return;
    }

    int count = 0, div = m/n;

    while (div != 1) {

        if (div % 3 == 0) {
            count++;
            div /= 3;
        } else if (div % 2 == 0) {
            count++;
            div /= 2;
        } else {
            cout << -1 << endl;
            return;
        }

    }
    cout << count << endl;


}

//! main
int main () { PannDev slv return 0; }
