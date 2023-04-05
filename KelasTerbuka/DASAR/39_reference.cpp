#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL <<endl
using namespace std;

int main () {
    PannDev
    // variabel
	int a = 5;

	cout << "address dari a " << &a << endl; // alamat
	cout << "  nilai dari a " << a << endl << endl; // 5

	// reference
	int &b = a;

	cout <<	"  nilai dari b " << b << endl; // 5
	cout << "address dari b " << &b << endl << endl; // alamat

	b = 10;
	cout << "  nilai dari a " << a << endl; // 10
	cout <<	"  nilai dari b " << b << endl << endl; // 10

	a = 20;
	cout << "  nilai dari a " << a << endl; // 20
	cout <<	"  nilai dari b " << b << endl; // 20

	return 0;
}