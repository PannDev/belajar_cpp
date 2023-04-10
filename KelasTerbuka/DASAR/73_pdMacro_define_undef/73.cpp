// preprocessing directive 
#include <iostream>

// macro const
#define PI 3.14159265359 
#define BAHASA "indonesia"

// macro for function
#define KUADRAT(X) (X*X)
#define MAX(X,Y)  ( ( X > Y ) ? X:Y )


// akhir dari preprocessing directive

using namespace std;

// double PI = 3.13;

int main() {

    cout << "nilai PI: " << PI << endl;
    cout << "bahasa: " << BAHASA << endl << endl;

    int x = 5;
    cout << "kuadrat: " << KUADRAT(5) << endl;

    cout << "max : " << MAX(10,1) << endl;

    #undef BAHASA
    #define BAHASA "english"
    cout << BAHASA << endl;

    return 0;
}