// menulis file eksternal
// #include <iostream>
// #include <fstream> //ofstream, ifstream, fstream
#include <bits/stdc++.h>

using namespace std;
#define PannDev std::ios::sync_with_stdio(0);
#define nL <<endl

int main () {PannDev

ofstream myFile;

	// ios::out = default, operasi output;
	// ios::app = menuliskan pada akhir baris;
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus;

	myFile.open("data3.txt", ios::app); // append 
    // di tumpuk tanpa buat baru, like edit
    myFile nL;
	myFile << "menuliskan baris baru pada data3";
	myFile.close();

	int a = 123876;
	myFile.open("data1.txt", ios::out); 
	myFile << "menuliskan baris baru pada data1";
    myFile nL;
	myFile << a ;
	myFile.close();

	myFile.open("data2.txt", ios::trunc); 
	myFile << "menuliskan baris baru pada data2";
	myFile.close();

return 0;
}