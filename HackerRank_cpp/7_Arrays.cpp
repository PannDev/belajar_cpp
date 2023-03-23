#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int n; cin >> n; // 4
    int arr[n]; // 1 4 3 2

    /// input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //reverse array
    for (int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    // i 3 2 1 0
    // arr[3] arr[2] arr[1] arr[0]
    // 2 3 4 1

    return 0;
}