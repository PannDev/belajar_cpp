#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
using namespace std;

// reporter (function) return
// worker (void) no return

// prototype
double hLuas(double p, double l); 
void println(double x);

int main (){
	PannDev
	
	double p, l; cin >> p >> l;
	double luas; 
	luas = hLuas(p,l);
	
	println(luas);
//	cout << luas(p,l) << endl;

	return 0;
}


void println(double x) {
	cout << "hasil = " << x << endl;
}

double hLuas(double p, double l) {
	return p*l;
}
