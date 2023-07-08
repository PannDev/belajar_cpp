#include <bits/stdc++.h>
using namespace std;

void solve (int a, int b, int c) {
    cin >> a >> b >> c;
    int arr[] = {a, b, c};
    sort(arr, arr + 3);
    // 0 terendah, 1 menengah, 2 tertinggi
    // soal = terendah, tertinggi, menengah
    cout << arr[0] << " " << arr[2] << " " << arr[1] << endl;
}


int main ( ) {
    ios::sync_with_stdio(0);
    int a, b, c;
    solve(a, b, c);

    return 0;
}