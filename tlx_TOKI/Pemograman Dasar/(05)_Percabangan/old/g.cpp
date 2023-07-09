#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    PannDev
    
    int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;

    int jarak_x = x1-x2;
    int jarak_y = y1-y2;

    if (jarak_x < 0 ) {
        jarak_x *= -1;
        
    }
    if(jarak_y < 0) {
jarak_y *= -1;
    }

    int hasil = jarak_x + jarak_y;
    cout << hasil << endl;

    return 0;
}