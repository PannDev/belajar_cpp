#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
using namespace std;

// rekrusif (recurtion) ==> pengulangan
// finite recurtion ==> rekrusif terbatas
// function yg memanggil diri nya sendiri sampai kondisi tertentu
// studi kasus fibonancci
// angka pangkat 0 = 1

// finite recurtion
int pangkatI(int a, int b)
{
    int res = a;
    for (int i = 1; i < b; i++)
    {
        res *= a;
    }
    return res;
}

int pangkatR(int a, int b)
{
    if (b == 1)
    {
        cout << "end of recurtion\n";
        return a;
    }
    else
    {
        cout << "\nrecurtion\n";
        return a * pangkatR(a, (b - 1));
    }
}

int main()
{
    PannDev int a, b;
    cout << "angka = ";
    cin >> a;
    cout << "pangkat = ";
    cin >> b;

    cout << "hasil iteration = " << pangkatI(a, b) << endl;
    cout << "hasil recurtion = " << pangkatR(a, b) << endl;
    return 0;
}
