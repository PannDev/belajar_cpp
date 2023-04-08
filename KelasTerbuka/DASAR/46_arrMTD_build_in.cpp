#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl
using namespace std;

void printArr(int *ptrArr, int baris, int kolom)
{
    int index = 0;
    for (int i = 0; i < baris; i++)
    {
        cout << "[ ";
        for (int j = 0; j < kolom; j++)
        {
            cout << *(ptrArr + index) << " ";
            index++;
        }
        cout << "]" nL;
    }
}

int main()
{
    PannDev

        // Array MultiDimensi Built-in
        // arr[row][col]

        const int row = 2;
    const int col = 2;
    int arrMD[row][col] = {1, 2, 3, 4};
    // why used const? row and col must used const. runtime error.
    // constan

    printArr(*arrMD, 2, 2);

    /*
    cout << arrMD[0][0] << " " << arrMD[0][1] nL;
    cout << arrMD[0][2] << " " << arrMD[0][3] nL;
    cout << arrMD[1][0] << " " << arrMD[1][1] nL;
    cout << arrMD[1][2] << " " << arrMD[1][3] nL;
    cout << arrMD[2][0] << " " << arrMD[2][1] nL;
    cout << arrMD[2][2] << " " << arrMD[2][3] nL;
    */
    /*
    1 2
    3 4
    visualisasi
           0     1    2     3
       0   1     2    3     4
       1   3     4    gada  gada
       2   gada  gada over  over
    */

    return 0;
}
