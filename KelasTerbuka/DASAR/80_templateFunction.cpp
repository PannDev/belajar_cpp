// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

#define PannDev ios::sync_with_stdio(0);
#define nL <<endl

// like overloading function
/* tidak efesien
void print(int data) {
    cout << data nL;
}

void print(double data) {
    cout << data nL;
}

void print(char data) {
    cout << data nL;
}
*/

// void print(int data) {
//     cout << data nL;
// }

template<typename T>
void print(T data) {
    cout << data nL;
}

template<typename T>
int toInt(T data) {
    return int(data);
}

template<typename T, typename U>
T max(T a, U b) {
    return (a > b) ? a : b; //ternary
}

int main() {PannDev

    // overlading function
    print(5);
    print(5.8);
    print('c');
    cout nL;

    print( toInt(10.10) ); // cv to int so output 10
    cout nL;
    
    cout << max(10,103.5) nL nL; // 103

    print<int>(10.15); // otomatis jadi int explisit
    print<double>(10.15);

    cout << max <double, int> (11.1,12) nL; // 12 (ini dijabarkan)


    return 0;
}