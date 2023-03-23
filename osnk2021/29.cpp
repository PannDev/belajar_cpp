#include <bits/stdc++.h>
using namespace std;


int main() {
    system("cls");
    // a 5000 || b 700
    int A, B, C, D;
    cin >> A >> B;
    C = A; 
    D = B;

   while (C!=D) { // kpk
        if (C < D) {
            C = C + A;
        } 
        if (C > D) {
            D = D + B;
        }
   }
    while (A!=B) { // fpb
        if (A < B) {
            B = B - A;
        } 
        if (A > B) {
            A = A - B;
        }
    }
    

    cout << A << " " << B << " " << D << " " << D << endl;
    cout << (C+D) / (A+B);


    return 0;
}