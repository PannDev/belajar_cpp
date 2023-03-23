// 5 7 1 4 ==> 4 1 7 5 nyoba reverse array
#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}