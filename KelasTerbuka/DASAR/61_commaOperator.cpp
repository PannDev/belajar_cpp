#include <bits/stdc++.h>
using namespace std;

#define PannDev std::ios::sync_with_stdio(0);
#define nL <<endl

// comma operator (  ,  ,  ,  );
// {expresion1, expresion2}

void printData(int val) {
	cout << val nL;
	
}

int main () {PannDev
int a;
int b;
int c;

a = (b = 1, c = 3 );
cout << a nL; // 3
cout << b nL; // 1
cout << c nL; // 3
cout nL;

a = (b = 1, cout << b nL, c = 2, cout << c nL, (b+c) );
// 1
// 2
cout << a nL; // 3
cout nL;

a = (b = 1, c = 2, (b+c) );
cout << a nL; // 3
cout nL;

// try use void
a = (b = 4, printData(b), c = 6, printData(c), (b+c) );
// 4 
// 6
cout << a nL; // 10
cout nL;


return 0;
}