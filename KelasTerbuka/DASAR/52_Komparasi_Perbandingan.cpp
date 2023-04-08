#include <bits/stdc++.h>
// # include <string> // STL
using namespace std;

#define PannDev std::ios_base::sync_with_stdio(0);
#define nL << endl

int main()
{
    PannDev

        // always false, must use STL string
        /* char kata[4] = {'e', 'p', 'a', 'n'};
        char kataa[4] = {'e', 'p', 'a', 'n'};
        if (kata == kataa) cout << "nica" nL; */

        // 	string kata("epan"); // use like this, work !
        // 	if (kata == "epan") cout << "aa" nL; // output aa

        string input;
    string secret("epan su");

    while (true)
    {
        cout << "tebak nama ? ";
        getline(cin, input);
        //		cout << "nama yg dimasukan adalah :" << input nL;

        if (input == secret)
        {
            cout << "Benar !" nL;
            break;
        }

        cout << "tebakan anda salah" nL;
    }

    return 0;
}
