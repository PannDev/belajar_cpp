#include <bits/stdc++.h>
#include <array> // bits/std gada array wkwk
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl
using namespace std;

// const can use const or #define
#define col 3
#define row 2

void printArray(array<array<int, col>, row> &valueArray)
{
    for (array<int, col> vectorRow : valueArray)
    { // ini for khusus loop array
        cout << "[ ";

        for (int valueCol : vectorRow)
        {
            cout << valueCol << " ";
        }

        cout << "]" nL;
        // cout << data nL; // cout ga bisa print isi array !!!
    }
}

int main()
{
    PannDev

        // taruh diluar
        //   	const int col = 3;
        //   	const int row = 2;
        array<array<int, col>, row> valueMD = {0, 1, 2, 3, 4, 5};

    printArray(valueMD);

    //	cout << nilaiMD[0][0] << " ";
    //	cout << nilaiMD[0][1] << " ";
    //	cout << nilaiMD[0][2] << " " nL;
    //
    //	cout << nilaiMD[1][0] << " ";
    //	cout << nilaiMD[1][1] << " ";
    //	cout << nilaiMD[1][2] << " " nL;

    return 0;
}
