#include <bits/stdc++.h>
#include "77_pann.h" // ambil dari luar

#define PannDev std::ios::sync_with_stdio(0);
#define nL <<std::endl

/*
77_pann.h
*/

void func() {
    std::cout << "ini adalah fungsi biasa" nL nL;
}

using namespace pann;
int main () {PannDev
func(); // ini adalah fungsi biasa

std::cout << pann::b nL; // int b = 10;
pann::pFunc(); // ini adalah func pann
pann::cout(100); // 100

// using namespace pann;
/*
std::cout << b nL;
pFunc();
cout(100);
*/

std::cout nL;
return 0;
}

/*
namespace gunanya biar rapih
*/