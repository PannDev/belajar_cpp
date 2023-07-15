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
#define coutn(x) cout<<x<<'\n'
#define couts(x) cout<<x<<' '
#define cout(x) cout<<x
#define cin(x) cin>>x
#define REP(i,a,b) for( int i = a; i  b; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define slv solve();

ll mod = 1e9+7;

//? void
void solve() {
    
    char num[100]; // batas 1 - 100
    int sum = 0;

    while( scanf("%s", num) !=EOF ) {
        sum += stoi(num);
    }

    coutn(sum);
    
}

//! main
int main () { PannDev slv return 0; }
