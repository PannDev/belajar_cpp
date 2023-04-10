#include <iostream>

#include "bersama.h"
#include "foo.h"
#include "bar.h"

// ifdef (sesuatu udh di difine atau belum)
/*
#ifdef FOO
    #define CEK "foo ada"
#else
    #define CEK "foo tidak ada"
#endif
*/

// ifndef (Jika sesuatu tidak ada)
// processsing directive guarding
/*
#ifndef FOO
    #define FOO "membuat foo baru" // maka membuat foo
#endif
*/

/* pragma once (jangan buat duplicate) */

using namespace std;

int main()
{

    Mahasiswa mahasiswa;
    mahasiswa.NIM = 1;
    cout << mahasiswa.NIM << endl;

    return 0;
}