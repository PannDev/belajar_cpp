#include <bits/stdc++.h>
#define PannDev ios::sync_with_stdio(0);
using namespace std;

// pola 1
int pola1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// pola 2
int pola2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// pola 3
int pola3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// pola 4
int pola4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// mulai mainan rumus deret
// pola 5
int pola5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// pola 6
int pola6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= (2 * i - n); k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// pola 7
int pola7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= (2 * i - n); k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

void solve(int choose, int n)
{
    switch (choose)
    {
    case 1:
        cout << endl
            << "Pola " << choose << endl;
        pola1(n);
        break;
    case 2:
        cout << endl
            << "Pola " << choose << endl;
        pola2(n);
        break;
    case 3:
        cout << endl
            << "Pola " << choose << endl;
        pola3(n);
        break;
    case 4:
        cout << endl
            << "Pola " << choose << endl;
        pola4(n);
        break;
    case 5:
        cout << endl
            << "Pola " << choose << endl;
        pola5(n);
        break;
    case 6:
        cout << endl
            << "Pola " << choose << endl;
        pola6(n);
        break;
    case 7:
        cout << endl
            << "Pola " << choose << endl;
        pola7(n);
        break;
    default:
        cout << "pola belum dibuat" << endl;
    }
}

int main()
{
    PannDev int choose, n;
    char yn, c;
    cout << "========== Pola Segitiga ==========" << endl;

    cout << "Mau lihat pola berapa? (1 - 7) = ";
    cin >> choose;
    cout << "masukan panjang = ";
    cin >> n;
    solve(choose, n);

    cout << endl
        << "Ingin membuat pola lagi? [y/n]  ";
    cin >> yn;
    if (yn == 'y')
    {
        cout << "mau di clear? [y/n]  ";
        cin >> c;
        cout << endl;
        if (c == 'y')
        {
            system("cls"); //
            return main();
        }
        else
        {
            return main();
        }
    }

    return 0;
}