#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL <<endl
using namespace std; 

int main () {
    PannDev
    
	array<int,10> nilai;
	
	cout << "Program menampilkan grafik nilai" nL nL;
	
	for (int i = 0; i <= nilai.size(); i++) {
		cout << "jumlah mahasiswa dengan nilai ";
		if (i == 0) {
			cout << "0 - 9: ";
		} else if (i == 10) {
			cout << "100 : ";
		} else {
			cout << i * 10 << " - " << (i*10) + 9 << ": ";
		}
		cin >> nilai[i];
	}
	
	cout nL;
	cout << "Grafik Nilai : " nL;
	
	for (int i = 0; i <= nilai.size(); i++) {
		if (i == 0) {
			cout << "0 - 9   : ";
		} else if (i == 10) {
			cout << "100     : ";
		} else {
			cout << i * 10 << " - " << (i*10) + 9 << " : ";
		}
		
		for(int star = 0; star < nilai[i]; star++) {
			cout << "*";
		}
		cout nL;
	}
	
    return 0;
}


