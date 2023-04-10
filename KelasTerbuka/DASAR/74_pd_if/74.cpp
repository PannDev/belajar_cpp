#include <iostream>

#define ID 1

#if ID == 1
    #define LANG "Indonesia"

#else
    #define LANG "English"

#endif

using namespace std;

int main() {

    cout << "Choose Languange : " << LANG << endl;

    return 0;
}