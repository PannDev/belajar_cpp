#include <bits/stdc++.h>
using namespace std;
#define PannDev std::ios::sync_with_stdio(0);
#define nL <<endl

int main () {PannDev
cout nL;

    // typedef adalah memberikan alias untuk tipe data

    typedef int I;
	typedef int iVector2D[2];
	typedef unsigned long ulong;
	typedef double vector[2];

	using numbers = double;

	I a = 10;
	iVector2D b = { 1,2 };
	ulong c = 1208736108726308;
	vector d = { 10.980, 15.123 };
	numbers e = 10.212312;

	cout << "nilai a: " << a  nL;  // 10
	cout << "nilai b: " << b[0] << " dan " << b[1]  nL;  // 1 dan 2
	cout << "nilai c: " << c  nL; //  
	cout << "nilai d: " << d[0] << " dan " << d[1]  nL;  // 10.98 dan 15.123
	cout << "nilai e: " << e  nL;  // 10.212312

cout nL;
return 0;
}