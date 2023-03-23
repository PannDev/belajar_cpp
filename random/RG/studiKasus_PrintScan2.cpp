// function 
#include <bits/stdc++.h>
using namespace std;
int hitungNilaiSiswa(int pts, int pas) {
    int nilaiSiswa = (pts + pas) / 2;
    return nilaiSiswa;
}

int main ( ) {
    int pts, pas;
    printf("masukan nilai PTS dan PAS = ");
    scanf("%d %d", &pts, &pas);

    int nilaiSiswa = hitungNilaiSiswa(pts, pas);
    printf("Nilai Siswa = %d", nilaiSiswa);

    return 0;
} 

// try procedure ? 
// #include <bits/stdc++.h>
// using namespace std;
// void hitungNilaiSiswa(int pts, int pas, int &nilaiSiswa) {
//     nilaiSiswa = ( pts + pas ) / 2 ;
// }

// int main ( ) {
//     int pts, pas, nilaiSiswa;
//     printf("masukan nilai PTS dan PAS = ");
//     scanf("%d %d", &pts, &pas);

//     hitungNilaiSiswa(pts, pas, nilaiSiswa);

//     printf("Nilai Siswa = %d", nilaiSiswa);
//     return 0;
// } 