#include <bits/stdc++.h>
using namespace std;


int main() {
  int A, B, C, D;
    A = 89; B = 78; C = 100; D = 105;

if (A >= B) { // 1
  if (A >= C) {
    if (A >= D) {
      cout << D << endl;
    } else {
      cout << A << endl;
    }
  } else { // 2
    if (C >= D) {
      cout << D << endl;
    } else { // 3
      cout << C << endl;
    }
  }
} else {
  if (B >= C) {
    if (B >= D) {
      cout << D << endl;
    } else {
      cout << B << endl;
    }
  } else {
    if (C >= D) {
      cout << D << endl;
    } else {
      cout << C << endl;
    }
  }
}

    return 0;
}