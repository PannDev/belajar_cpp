// #define FOO "ini adalah foo dalam bersama.h"

// guard pake ( _ )
// #ifndef _BERSAMA
//     #define _BERSAMA

#pragma once // tapi ini gabisa di pakai di compler lama
// setiap bersama.h di include pastikan gada duplicate

struct Mahasiswa {
    int NIM;
};

// #endif