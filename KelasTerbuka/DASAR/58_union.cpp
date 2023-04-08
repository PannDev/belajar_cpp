#include <bits/stdc++.h>
using namespace std;
#define PannDev std::ios_base::sync_with_stdio(0);
#define nL <<endl

/*
address dan jumlah bit beda beda
data (1) int 4 bit
data (2) float 8 bit
data (3) double
address nya  kan misah misah

tapi kalau pakai unions itu semua tidak akan terjadi, jadi dia akan mengalokasikan 1 buah blok data 
yg akan dipakai oleh 3 itu

union data {
data;
};

jarang dipakai, tapi ini pakai istilahnya 1 address aja, jadi memorinya alokasi nya cumaa 1, walaupun tipe data banyak.
berapa banyak memori yg dipakai? yg max dari ketiga data itu.
*/

/*
union data {
	int a; // 4 bit
	char b[4]; // 1 bit x 4
};
*/
union nama {
	int AintValue;
	char BcharValue[4]; // 1 bit x 4
};


int main () { PannDev

	nama nama;
	
	nama.AintValue = 12345642;
	cout << "size a: " << sizeof(nama.AintValue) << " value: " << nama.AintValue nL; // 1234562
	cout << "size b: " << sizeof(nama.BcharValue) << " value: " <<  nama.BcharValue nL; // *a?
	cout nL;
	
	nama.BcharValue[0] = 'a';
	nama.BcharValue[1] = 'b';
	nama.BcharValue[2] = 'c';
	nama.BcharValue[3] = 'd';
	cout << "size a: " << sizeof(nama.AintValue) << " value: " << nama.AintValue nL; // 1684234849
	cout << "size b: " << sizeof(nama.BcharValue) << " value: " <<  nama.BcharValue nL; // abcd
	cout nL;
	
return 0;
}
