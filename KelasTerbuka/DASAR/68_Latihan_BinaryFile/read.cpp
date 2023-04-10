#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define PannDev std::ios::sync_with_stdio(0);
#define nL <<endl

struct Mahasiswa{
int NIM;
string nama;
string jurusan;

};



int main() { PannDev

fstream myFile;
Mahasiswa readData;

myFile.open("data.bin", ios::in | ios::binary);

//  0-----56-----|-----56-----|-----56-----|
// cout << sizeof(Mahasiswa) nL;

// int position = 1;
// readData = getData(position,myFile);

cout << readData.NIM nL;
cout << readData.nama nL;
cout << readData.jurusan nL;

myFile.close();


return 0;
}