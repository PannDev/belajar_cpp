#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL <<endl
//#include <array> // standart library ( STL )     udh ada di <bits/stdc++.h> cuyyy
using namespace std;



int main () {
    PannDev
    
    // membuat arrray dengan menggunakan STL
    // array<tipe data, jumlah array> nama array
    
    array<int, 5> nilai;
    
    for(int i = 0; i < 5; i++) {
    	nilai[i] = i;
    	cout << "nilai [" << i <<  "] = " << nilai[i];
		cout << " address : " << &nilai[i] nL nL;
	}
	
	// size array
	cout << "size array = " << nilai.size() nL;
	// address awal dari array
	cout << "address awal = " << nilai.begin() nL;
	// address akhir dari array
	cout << "address akhir = " << nilai.end() nL;
	// nilai dengan index
	cout << "nilai ke 2 = " << nilai.at(2) nL;
	
    return 0;
}


