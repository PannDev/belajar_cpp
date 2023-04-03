#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PannDev                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    int num, digit;
    int res = 0;
    int multiplier = 1;
    cin >> num;

    while (num > 0)
    {
        digit = num % 10;
        num /= 10;

        digit += 2;

        if (digit > 9)
        {
            digit = 0;
        }

        res += digit * multiplier;
        multiplier *= 10;
    }

    cout << res << endl;

    return 0;
}