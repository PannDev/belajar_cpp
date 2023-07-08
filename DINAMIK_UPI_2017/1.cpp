#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    system("cls");
    string text;
    cout << "Masukan Kata : ";
    getline(cin, text);

    if (text.length() < 50)
    {
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == '+')
            {
                text[i - 1] = toupper(text[i - 1]);
                text.erase(i, 1);
            }
            else if (text[i] == '-')
            {
                text[i - 1] = tolower(text[i - 1]);
                text.erase(i, 1);
            }
        }
    }
    else
    {
        cout << "maaf anda memasukan " << text.length() << " huruf " << endl;
        cout << "tidak boleh lebih dari 49 huruf." << endl;
        return main(); // balik lagi ke atas minta input
    }

    cout << text << endl;

    return 0;
}

// exercise ! (  https://youtu.be/DTnVbnjUss8  )
// Jika '+' maka jadikan HURUF BESAR (sebelumnya)
// Jika '-' maka jadikan HURUF KECIL (sebelumnya)
// output   yang sudah benar BESAR KECIL dan hapus '-' dan '+'