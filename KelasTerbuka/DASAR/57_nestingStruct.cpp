#include <bits/stdc++.h>
//# include <string> // STL
using namespace std;
#define PannDev std::ios_base::sync_with_stdio(0);
#define nL <<endl

struct aktor {
  string nama;
  int tahun_lahir;
};

struct film {
  string judul;
  string genre;
  int tahun;
  // struct aktor
  aktor pemeran_1;
  aktor pemeran_2;
};


int main () { PannDev
  aktor aktor1, aktor2;
  film film1, film2;
  
  // buat aktor 1
  aktor1.nama = "PannDev";
  aktor1.tahun_lahir = 2007;
  
  // buat aktor 2
  aktor2.nama = "Unknown";
  aktor2.tahun_lahir = 2007;
  
  // buat film 1
  film1.judul = "Pengabdi cpp";
  film1.genre = "comedy";
  film1.tahun = 2023;
  film1.pemeran_1 = aktor1;
  film1.pemeran_2 = aktor2;
  
  // buat film 2
  film2.judul = "Pengabdi C";
  film2.genre = "comedy";
  film2.tahun = 2022;
  film2.pemeran_1 = aktor1;
  
  // out film 1
  cout << "film1.judul  = " << film1.judul nL;
  cout << "film1.pemeran_1.nama  = " << film1.pemeran_1.nama nL;
  cout << "film1.pemeran_2.nama  = " << film1.pemeran_2.nama nL;
  cout nL;
  
  // out film 2
  cout << "film2.judul  " << film2.judul nL;
  cout << "film2.pemeran_1.nama  " << film2.pemeran_1.nama nL;
  cout << "film2.pemeran_2.nama  " << film2.pemeran_2.nama nL;
  cout nL;
  
return 0;
}