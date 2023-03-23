#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    // increment
    // post fix
    cout << "increment" << endl;
    int a = 1;
    cout << a++ << endl; // 1
    cout << a++ << endl; // 2
    // increment
    // pre fix itu langsung
    int b = 1; 
    cout << ++b << endl; // 2
    cout << ++b << endl; // 3
    cout << endl;

    // decrement
    // post fix
    cout << "decrement" << endl;
    int c = 5;
    cout << c-- << endl; // 5
    cout << c-- << endl; // 4
    // decrement
    // pre fix itu langsung
    cout << --c << endl; // 2
    cout << --c << endl; // 1
    


    return 0;
}