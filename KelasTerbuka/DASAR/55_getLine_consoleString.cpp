#include <bits/stdc++.h>
//# include <string> // STL
using namespace std;
// getline iostream

#define PannDev std::ios_base::sync_with_stdio(0);
#define nL <<endl


int main () { PannDev

	string kalimat_input;
	cout << "masukan kalimat : ";
	
//	getline (cin, var)
	getline(cin, kalimat_input);
	cout << "kalimat anda : " << kalimat_input nL nL;
	
	// jumlah kata dari input
	int posisi = 0;
	int jumlah = 0;
	
	while (true) {
		posisi = kalimat_input.find(" ", posisi + 1);
		jumlah++;
		cout << "posisi: " << posisi << " jumlah: " << jumlah nL;
		
		if (posisi < 0) {
			break;
		}
	}
	
	cout << "jumlah kalimat adalah: " << jumlah nL;
	cout nL;


return 0;
}
