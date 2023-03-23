#include <bits/stdc++.h>
using namespace std;


int main() {

    int a, b, c;
    a = 11; b = 6; c = 7;

    b = a - b;
    c = a - c;
    a = b + c;

    cout << (a+b) * c << endl;

    return 0;
}