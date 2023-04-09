#include <bits/stdc++.h>
// #include <array>
#include <exception>
using namespace std;

#define PannDev ios::sync_with_stdio(0);
#define nL <<endl

/*
  1. syntax error  missing semicollon
  2. linking error  
  3. non-error  ( return 10 * -5;  )
  4. runtime error (  5/0  Floating point exception: 8 )  segmentation fault  5/0 = NaN
  try and catch (exception)
*/


int divide(int &num, int &denum) {
    // if ( denum == 0 ) break;
    // throw overflow_error("[ERROR] pembagi nol");
    throw "[ERROR] pembagi nol";
    return num/denum;
}


int main () {PannDev

/*
    array<int, 5> a = {0,1,2,3,4};
    cout << a.at(5) nL;
*/

/*
    array<int, 5> a = {0,1,2,3,4};
try {
    cout << a.at(5) nL;
} catch(exception &e) {
    cout nL;
    cout << e.what() nL;
    cout nL;
}
*/



while (true) {
    int a; cout << "num: "; cin >> a;
    int b; cout << "denum: "; cin >> b;
    int c;

    try {
    // throw "something";
    c = divide(a,b);
    cout << c nL;
    } 
    // catch(exception &e) 
    catch(const char* e)
    {
    // cout << e.what() nL;
    cout << e nL;
    }

}

cout << "end of program" nL;

return 0; 
}