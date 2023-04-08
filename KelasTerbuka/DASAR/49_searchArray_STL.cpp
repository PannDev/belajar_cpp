#include <bits/stdc++.h>
#include <array>
#include <algorithm>
// using namespace std;

#define PannDev std::ios_base::sync_with_stdio(0);
#define nL << endl

const size_t arraySize = 10;

void printArray(std::array<int, arraySize> &angka)
{ // int
    std::cout << "Array: ";
    for (int &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main()
{
    PannDev

        std::array<int, arraySize>
            angka = {9, 4, 2, 5, 8, 0, 1, 7, 6, 3};
    printArray(angka); // masuk procedure void

    int angkaCari;

    // sort dulu
    // search -> binary_search
    std::cout << "mencari angka dalam array diatas: ";
    std::cin >> angkaCari;

    std::sort(angka.begin(), angka.end());
    bool ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

    if (ketemu)
    { // bool
        std::cout << "ketemu" << std::endl
                  << std::endl;
    }
    else
    {
        std::cout << "tidak ketemu" << std::endl
                  << std::endl;
        return main();
    }

    return 0;
}
