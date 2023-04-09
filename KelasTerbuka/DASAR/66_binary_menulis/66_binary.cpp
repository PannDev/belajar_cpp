// menulis binary file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define PannDev std::ios::sync_with_stdio(0);
#define nL <<endl

int main () {PannDev

    fstream myFile;
    int number = 12354;
    myFile.open("data.bin", ios::out | ios::binary);

    myFile.write( reinterpret_cast<char*> (&number), sizeof(number) );

    myFile.close();

return 0;
}