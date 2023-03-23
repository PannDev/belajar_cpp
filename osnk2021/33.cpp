#include <bits/stdc++.h>
using namespace std;

int bahagia(int A) { //function
  if (A > 0) { //1111 > 0 = true (int) 
    int B = A / 2; //1111/2 = 555 (int) (B = 555)
    int C = A - (B * 2); //1111 - (555*2) = 1 (int)
    cout << C; //1 (int)
    bahagia(B); //555 (int)
  }
  //   return B, C;
  return A;
}

int main() {
  int A;
  cin >> A; //1111
  cout << bahagia(A) << endl;
  return 0;
}