#include <iostream>
#include <string>
using namespace std;

#define PannDev ios::sync_with_stdio(0);
#define nL << endl

/*
kapan memakai auto? ketika punya func template yg depannya berubah

auto itu dimulai dari C++11
update sampai C++17 (template auto parameter)
*/
template<typename T, typename U>
    auto max(T a, U b) {
        return (a > b) ? T(a) : U(b); // ternary
    }

int main()
{
    PannDev

    // tipe data auto otomatis deteksi isinya yg di asign
    int a = 17;
    string b = "PannDev";
    double c = 15.432;
    float d = 16.5f;
    // a > b
    auto e = max(d, c); // penggunaan auto yg benar
    auto f = max(c, a); // tetap milih double karena bit terbesar

    cout << a << " tipe: " << typeid(a).name() nL;
    cout << b << " tipe: " << typeid(b).name() nL;
    cout << c << " tipe: " << typeid(c).name() nL;
    cout << d << " tipe: " << typeid(d).name() nL nL;

    cout << e << " tipe: " << typeid(e).name() nL;
    cout << f << " tipe: " << typeid(e).name() nL nL;


    return 0;
}

