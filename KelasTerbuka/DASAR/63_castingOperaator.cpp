#include <bits/stdc++.h>
using namespace std;

#define PannDev std::ios::sync_with_stdio(0);
#define nL <<endl

/*
operator casting
(tipeData)
*/

int main() { PannDev

    int a = 5;
    float b = 6.67f;
    char c = 'd';

    // 11.67
    cout << a + b nL; // implisit casting, dibelakang layar dia akan ngerubah float

    cout << a + (int)b nL; // casting explisit ke int

    cout << c << " " << (int)c nL; // char c jadi int c == 100
    cout << c + a nL; // casting explisit ke int (100 + 5 = 105)

    cout << (char)(c + a) nL; // i
    // c = d
    // a = 5
    // d + 5 = i  (  d efghi  )

    float hasil = a / b;
    cout << (float)hasil nL; // casting explisit, casting dijabarkan

return 0;
}