#include <iostream>
using namespace std;

// macro  (   literal    )
#define PI 3.1459265359

/*
    ( # )   preprocessing directive 
*/

// punya address memory
double pi = 3.1459265359;

int main () {
    cout  << "Nilai PI const = " << PI << endl;
    cout  << "Nilai pi double = " << pi << endl;
    cout  << "address pi double = " << &pi << endl;

    return 0;
}