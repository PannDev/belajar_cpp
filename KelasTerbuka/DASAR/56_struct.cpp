#include <bits/stdc++.h>
//# include <string> // STL
using namespace std;
#define PannDev std::ios_base::sync_with_stdio(0);
#define nL <<endl

/*
data yg dibentuk oleh beberapa data

jeruk = buah;
jeruk,warna
jeruk.berat
jeruk.harga
jeruk.rasa

< ga pakai struct >
jeruk_warna = orange;
jeruk_berat = 4;
*/

struct buah {
	string warna;
	float berat;
	int harga;
	string rasa;
};


int main () { PannDev
	
	// struct
	buah apel;
	buah jeruk;
	
	apel.warna = "merah";
	apel.berat = 250.00;
	apel.harga = 50000;
	apel.rasa = "manis";
	
	jeruk.warna = "orange";
	jeruk.berat = 150.00;
	jeruk.harga = 25000;
	jeruk.rasa = "manis";
	
	cout << "Struct buah apel;" nL;
	cout << apel.warna nL;
	cout << apel.berat nL;
	cout << apel.harga nL;
	cout << apel.rasa nL;
	cout nL;
	
	cout << "Struct buah jeruk;" nL;
	cout << jeruk.warna nL;
	cout << jeruk.berat nL;
	cout << jeruk.harga nL;
	cout << jeruk.rasa nL;
	cout nL;

return 0;
}
