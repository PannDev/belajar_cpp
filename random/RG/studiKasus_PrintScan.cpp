// buatlah prgram memasukan input nilai PTS dan PAS
// output adalah nilaiSiswa (PTS + PAS) / 2

#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int pts,pas;
    printf("Masukan nilai PTS = ");
    scanf("%d", &pts);

    printf("Masukan nilai PAS = ");
    scanf("%d", &pas);

    int nilaiSiswa = (pts + pas) /2;
    printf("Nilai Siswa = %d", nilaiSiswa);

    return 0;
}