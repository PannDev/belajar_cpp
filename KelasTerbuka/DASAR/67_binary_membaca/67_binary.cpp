#include <iostream>
#include <fstream>
#include <string>

using namespace std;
#define PannDev std::ios::sync_with_stdio(0);
#define nL <<endl

int main(){ PannDev
	fstream myFile;
	int hasil;
	myFile.open("data.bin", ios::in | ios::binary);

	myFile.read( reinterpret_cast<char*> (&hasil), sizeof(hasil) );

	cout << "besar integer = " << sizeof(hasil) nL;
	cout << hasil nL;

	return 0;
}

// fstream myFile;
// 	int number = 12345;
// 	myFile.open("data.bin", ios::out | ios::binary);

// 	myFile.write(reinterpret_cast<char*>(&number),sizeof(number));

// 	myFile.close();