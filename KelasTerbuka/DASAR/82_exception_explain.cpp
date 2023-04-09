#include <bits/stdc++.h>
using namespace std;

#define PannDev ios::sync_with_stdio(0);
#define nL <<endl

/*
  1. syntax error  missing semicollon
  2. linking error  
  3. non-error  ( return 10 * -5;  )
  4. runtime error (  5/0  Floating point exception: 8 )  segmentation fault  5/0 = NaN
*/

/* int kuadrat(int &val); */   // linking error, creating prototype but ...

/* runtime error
int divide(int &num, int &denum) {
    return num/denum;
}
*/

int main () {PannDev

// int a = 10;
/* int c = kuadrat(a); */
/* cout << c nL; */

/* runtime error
int a; cout << "num: "; cin >> a;
int b; cout << "denum: "; cin >> b;
int c = divide(a,b);
cout << c nL;
*/

return 0; 
}