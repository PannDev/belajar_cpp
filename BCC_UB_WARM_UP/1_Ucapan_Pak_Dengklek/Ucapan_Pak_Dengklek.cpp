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

    int n; cin >> n;
    float r[n];
    float sum = 0;

    for (int i = 0; i < n; i++) {
    cin >> r[i];
    sum+=r[i];
    }

    float res = sum/n;
    cout << res << endl;


return 0;
}
