#include <bits/stdc++.h>
using namespace std;

#define PannDev std::ios::sync_with_stdio(0);
#define nL <<endl

enum warna { merah, putih, hitam, coklat = 5, kuning , biru };

int main () { PannDev
// range data
	
	warna kain;
	
	kain = putih;
	cout << kain nL nL; // urutan 1 di enum warna
	
	kain = coklat;
	cout << kain nL nL; // urutan 5 di assign enum warna
	
	kain = kuning;
	cout << kain nL nL; // urutan 6 di enum warna
	
	kain = hitam;
	cout << kain nL nL; // urutan 2 di enum warna
	
	if (kain == hitam) cout << "warna kain hitam" nL nL;
	
	kain = merah;
	cout << kain nL nL; // urutan 0 di enum warna
	
	return 0;
}