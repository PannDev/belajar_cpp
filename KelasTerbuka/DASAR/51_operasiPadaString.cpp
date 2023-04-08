#include <bits/stdc++.h>
// # include <string> // STL
using namespace std;

#define PannDev std::ios_base::sync_with_stdio(0);
#define nL << endl

int main()
{
    PannDev

        string kata("PannDev");

    // menampilkan data string
    cout << kata nL;

    // mengambil karakter berdasarkan index
    cout << "index ke 0 : " << kata[0] nL;
    cout << "index ke 1 : " << kata[1] nL;
    cout << "index ke 2 : " << kata[2] nL nL;

    // merubah karakter pada index
    kata[1] = 'E'; // string kata("PannDev");
    cout << "[change index 1 to 'E'] " << kata nL;

    // menyambung, concatenation
    string kata2(kata + "XOXO"); // string kata("PannDev");
    cout << "[concatenation] " << kata2 nL;

    string kata3("rill");
    kata2.append(" " + kata3); // apend kata2
    cout << kata2 nL;

    string kata4("cuyy!!!!!!");
    kata2 += " " + kata4;
    cout << kata2 nL;

    return 0;
}
