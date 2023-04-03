#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void kambing2(int m)
{

    int arr[11] = {3, 9, 2, 6, 1, 4, 7, 8, 5, 10, 0};

    if (m <= 5)
    { // harusnya m <=10
        kambing2(m * 2);
        kambing2(m * 2 + 1);
        cout << arr[m] << " ";
    }
}

int main()
{
    kambing2(1);
    // soal osn k yg binary tree. lupa tahun berapa

    return 0;
}
