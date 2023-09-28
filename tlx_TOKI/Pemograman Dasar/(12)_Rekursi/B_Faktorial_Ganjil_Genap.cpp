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
int faktorial(int n) {
    
    if (n == 0) return 1;
    else if (n % 2 == 0) return n/2 * faktorial(n - 1);
    else return n * faktorial(n - 1);
    
}

//! main
int main () { PannDev 

int n; cin >> n;
cout << faktorial(n) << endl;


return 0; }
