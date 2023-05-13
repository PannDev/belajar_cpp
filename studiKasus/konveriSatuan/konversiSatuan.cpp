#include <bits/stdc++.h>
#include <array>
using namespace std;
#define PannDev ios_base::sync_with_stdio(0);
#define nL << endl

int main()
{
    PannDev
        // n 7
        // i = 0 - 6 //? i+1 biar ga ambigu

        int s,
        e; //! untuk index integer
    double num, res;

    vector<string> satuan = {"km", "hm", "dam", "m", "dm", "cm", "mm"};

    //? angka nya berapa, satuannya apa, konversi ke mana
    string start, end; //! untuk satuan string
    cout << "number = ";
    cin >> num;
    cout << "Dari mana : ";
    cin >> start;
    cout << "Ke Apa : ";
    cin >> end;

    int n = satuan.size(); //* cek panjang

    //! n = banyak data
    for (int i = 0; i < n; i++)
    {
        if (start == satuan[i])
        {
            s = i + 1;
        }
        if (end == satuan[i])
        {
            e = i + 1;
        }
    }

    //? START dan END ada di index ke berapa?
    // cout << "s = " << s nL;
    // cout << "e = " << e nL;

    res = num;
    //* START < END maka turun  KM(1) < CM(6)
    if (s < e)
    {
        //! z = res dikalikan 10 sebanyak z
        int z = e - s;
        for (int k = 0; k < z; k++)
        {
            res *= 10;
        }
    }
    //* START > END maka naik  CM(6) > KM(1)
    else if (s > e)
    {
        //! z = res dibagi 10
        int z = s - e;
        for (int k = 0; k < z; k++)
        {
            res /= 10;
        }
    }
    else
    {
        res = num;
    }

    cout nL;
    cout << num << " " << start << " = " << res << " " << end nL;
    //? angka (satuan) = hasil konversi (satuan)
    //! start end ini pakai string sesuai di awal (jangan pusing)

    return 0;
}