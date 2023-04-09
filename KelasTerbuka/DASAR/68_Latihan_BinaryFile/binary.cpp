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


int main() {PannDev
    fstream myFile;
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

   Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3;

   mahasiswa1.NIM = 123;
   mahasiswa1.nama = "PannDev";
   mahasiswa1.jurusan = "Ilmu Komputer";

   mahasiswa2.NIM = 124;
   mahasiswa2.nama = "naila";
   mahasiswa2.jurusan = "Teknik Informatika";

   mahasiswa3.NIM = 125;
   mahasiswa3.nama = "orang";
   mahasiswa3.jurusan = "Sistem Informasi";

   myFile.write( reinterpret_cast<char*> (&mahasiswa1), sizeof(Mahasiswa) );
   myFile.write( reinterpret_cast<char*> (&mahasiswa2), sizeof(Mahasiswa) );
   myFile.write( reinterpret_cast<char*> (&mahasiswa3), sizeof(Mahasiswa) );

    

   myFile.close();


    return 0;  
}