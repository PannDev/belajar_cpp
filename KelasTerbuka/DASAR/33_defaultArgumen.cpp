#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
using namespace std;

// fungsi prototype
double vBalok(double p = 1, double l = 1, double t = 1); // default argument / nilai standart

int main()
{
    PannDev
            cout
        << "volume balok = " << vBalok(3, 4, 5) << endl;
    cout << "volume balok = " << vBalok(3, 4) << endl;
    cout << "volume balok = " << vBalok(3) << endl;
    cout << "volume balok = " << vBalok() << endl;

    return 0;
}

double vBalok(double p, double l, double t)
{
    return p * l * t;
}
