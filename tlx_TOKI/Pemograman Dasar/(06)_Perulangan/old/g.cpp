#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    PannDev
    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        min = (arr[i] > min) ? min : arr[i];
        max = (arr[i] < max) ? max : arr[i];
        // if (arr[i] > max) {
        //     max = arr[i];
        // }
        // if (arr[i] < min) {
        //     min = arr[i];
        // }
    }


    cout << max << " " << min << endl;
    

    return 0;
}