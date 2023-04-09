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

myFile.read(reinterpret_cast<char*> (&readData), sizeof(Mahasiswa) );

cout << readData.NIM nL;
cout << readData.nama nL;
cout << readData.jurusan nL;

return 0;
}