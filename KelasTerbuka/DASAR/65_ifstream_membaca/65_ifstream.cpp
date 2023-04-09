#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define PannDev std::ios::sync_with_stdio(0);
#define nL <<endl

int main () {PannDev
    ifstream myFile;
    string output, buffer;
    bool isData;
    int no;
    string nama;

    /*
    ios::in
    ios::ate = mulai dari akhir file.
    ios::binary = membaca file biner.
    */

    myFile.open("data.txt", ios::in );
    // myFile >> data;
    // myFile >> data;

    while(!isData) {
        getline(myFile, buffer);
        output.append("\n" + buffer);

        if (buffer == "data") {
            isData = true;
        }
    }

    cout << output nL;

    getline(myFile,buffer);
    cout << buffer nL;

    int jumlahData = 0;
    while( !myFile.eof() ) {
        myFile >> no;
        myFile >> nama;

        cout << no << "\t" << nama nL;
        jumlahData++;
    }
    cout << "jumlah data = " << jumlahData nL;


    cout nL;

return 0;
}