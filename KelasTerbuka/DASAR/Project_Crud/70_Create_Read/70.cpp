#include <iostream>
#include <string>

#define PannDev ios_base::sync_with_stdio(0);
#define nL <<endl
using namespace std;

int getOption(); // prototype

int main() {PannDev
    
    int option = getOption();
    char yn;

    enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while (option != FINISH ) {
        // option = getOption();

        switch(option) {
            case CREATE:
                cout << "Menambah data mahasiswa" nL;
            break;
            case READ:
                cout << "Tampilkan data mahasiswa" nL;
            break;
            case UPDATE:
                cout << "Ubah data mahasiswa" nL;
            break;
            case DELETE:
                cout << "Hapus Data Mahasiswa" nL;
            break;
            default:
                cout << "Masukan 1 - 5 kak." nL;
                break;
        }

    label_continue: // controlflow

        cout << "more? [y/n] : "; cin >> yn;
        if ( (yn == 'y') | (yn == 'Y') ) {
        option = getOption();
        } else if ( (yn == 'n') | (yn == 'N') ) {
            break;
        } else {
            goto label_continue;
        }

    }

    cout << "Akhir dari program" nL;
    

return 0;
}

int getOption() {
    system("cls");
    cout << "\nProgram CRUD data mahasiswa" nL;
    cout << "=============================" nL;
    cout << "1. Tambah data mahasiswa" nL;
    cout << "2. Tampilkan data mahasiswa" nL;
    cout << "3. Ubah data mahasiswa" nL;
    cout << "4. Hapus data mahasiswa" nL;
    cout << "5. Selesai" nL;
    cout << "=============================" nL;
    cout << "pilih [ 1 - 5 ]: ";
    int input; cin >> input;

    return input;
}