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
    
    int n, m, p; cin >> n >> m >> p;

    int matrixA[n][m], matrixB[m][p], matrixC[n][p];
    //! note
    // [n][m] * [m][p] = [n][p]
    //  [2][3] * [3[2] = [2]2]

    for (int i =0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrixA[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> matrixB[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                sum += matrixA[i][k] * matrixB[k][j];
            }
            matrixC[i][j] = sum;
            sum = 0;
        }
    }

    for (int i =0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }
    
}

//! main
int main () { PannDev slv return 0; }
