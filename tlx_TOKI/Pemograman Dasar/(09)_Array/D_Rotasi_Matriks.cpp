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
    
    int n, m; cin >> n >> m;
    int nm[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> nm[i][j];
        }
    }

    // int nmT[m][n];
    for (int i = 0; i < m; i++) {
        //bcs transpose 90 derajat
        for (int j = n-1; j >= 0; j--) {
            // nmT[i][j] = nm[j][i];
            cout << nm[j][i] << " ";
        }
        cout << endl;
    }

    // here if transpose -90 derajat
    // for (int j = 0; j < n; j++)
    
}

//! main
int main () { PannDev slv return 0; }
