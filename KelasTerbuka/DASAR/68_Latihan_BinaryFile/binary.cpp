/* Latihan I/O External File Binary */
/* 8:50 */
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

/* AMBIL DATA */
Mahasiswa getData(int position, fstream &myFile) {
Mahasiswa bufferData;

// windows bug, only read NIM  :(
myFile.seekp( (position-1) * sizeof(Mahasiswa) );
myFile.read(reinterpret_cast <char*> (&bufferData), sizeof(Mahasiswa) );

return bufferData;

/*
cout << readData.NIM nL;
cout << readData.nama nL;
cout << readData.jurusan nL;
*/
}

/* MENULIS DATA */
void writeData(Mahasiswa &data, fstream &myFile) {
    myFile.write( reinterpret_cast<char*> (&data), sizeof(Mahasiswa) );
}

void writeDataPosition(int position, Mahasiswa &bufferData, fstream &myFile) {
    myFile.seekg( (position-1) * sizeof(Mahasiswa) );
    myFile.write(reinterpret_cast <char*> (&bufferData), sizeof(Mahasiswa) );
}


int main() {PannDev
    fstream myFile;
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

   Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

   mahasiswa1.NIM = 123;
   mahasiswa1.nama = "PannDev";
   mahasiswa1.jurusan = "Ilmu Komputer";

   mahasiswa2.NIM = 124;
   mahasiswa2.nama = "naila";
   mahasiswa2.jurusan = "Teknik Informatika";

   mahasiswa3.NIM = 125;
   mahasiswa3.nama = "orang";
   mahasiswa3.jurusan = "Sistem Informasi";

   writeData(mahasiswa1,myFile);
   writeData(mahasiswa2,myFile);
   writeData(mahasiswa3,myFile);

    mahasiswa2.nama = "paen";
   writeDataPosition(2, mahasiswa2, myFile);

    output = getData(2, myFile);
    cout << output.NIM nL;
    cout << output.nama nL;
    cout << output.jurusan nL;

   myFile.close();


    return 0;  
}