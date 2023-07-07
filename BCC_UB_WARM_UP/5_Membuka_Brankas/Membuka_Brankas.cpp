#include<bits/stdc++.h>
using namespace std;

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

void generateCombinations(int n, int k, vector<int>& combination, int start) {
    if (k == 0) {
        for (int i = 0; i < len(combination); i++) {
            cout << combination[i] << " ";
        }
        cout << endl;
        return;
    }
    
    for (int i = start; i <= n; i++) {
        combination.push_back(i);
        generateCombinations(n, k - 1, combination, i + 1);
        combination.pop_back();
    }
}

int main () { 
    PannDev

    int n, k;
    cin >> n >> k;

    vector<int> combination;
    generateCombinations(n, k, combination, 1);

    return 0;
}
