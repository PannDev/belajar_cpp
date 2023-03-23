#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int max_of_four(int a, int b, int c, int d) {
    int data[] = {a,b,c,d};
    int max = data[0];

    for (int i = 0; i < 4; i++)
    {
        if (data[i] > max)
        {
            max = data[i];
        }
    }

    /* 3, 4, 6, 5
    iteration 0 = if(3>3) no
    iteration 1 = if(4>3) so max = 4
    iteration 2 = if(6>4) so max = 6
    iteration 3 = if(5>6) no
    */

    return max;
}

int main(){
    // PannDev
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
    
}