#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
using namespace std;

// reporter (function) return
// worker (void) no return

double keliling (double p, double l) {
	return 2*(p+l);
}

double luas (double p, double l) {
	return p*l;
}

void slv(double p, double l) {
	cout << "Keliling = " << keliling(p,l) <<endl;
	cout << "Luas = " << luas(p,l) <<endl;
}

int main (){
	PannDev
	double p,l;
	cout << "Masukan Panjang = "; cin >> p;
	cout << "Masukan Lebar = "; cin >> l;
	cout << endl;
	slv(p,l);

}
