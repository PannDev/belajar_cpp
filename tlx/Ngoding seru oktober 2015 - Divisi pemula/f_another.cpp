#include <bits/stdc++.h>

char size(int b, int p, int l) {
    if (std::tie(b, p, l) <= std::make_tuple(10, 40, 90)) return 'S';
    if (std::tie(b, p, l) <= std::make_tuple(14, 60, 120)) return 'M';
    if (std::tie(b, p, l) <= std::make_tuple(18, 80, 180)) return 'L';
    return 'X';
}

int main() { 
int b, p, l; std::cin >> b >> p >> l;
std::cout << size(b, p, l) << '\n';

    return 0;
}