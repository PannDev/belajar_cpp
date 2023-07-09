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
#define coutn(x) cout<<x<<'\n'
#define couts(x) cout<<x<<' '
#define cout(x) cout<<x
#define cin(x) cin>>x
#define REP(i,a,b) for( int i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1000000007;

//? void
void solve() {
    
    int matrix[3][3], transpose[3][3];

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin(matrix[i][j]);
            transpose[i][j] = matrix[i][j];
        }        
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            couts(transpose[j][i]);
        }
        cout(endl);
    }
    
    return;
}

//! main
int main () {
    PannDev solve();



    return 0;
}
