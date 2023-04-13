#include <bits/stdc++.h>
using namespace std;

#define PannDev ios_base::sync_with_stdio(0);
#define nL <<endl

// prototype
int getOption();
int handleAddition(int a, int b) {
    return a + b;
}
int handleSubtraction(int a, int b) {
    return a - b;
}
int handleMultiplication(int a, int b) {
    return a * b; 
}
int handleDivision(int a, int b) {
    return a / b;
}
int handleModulo(int a, int b) {
    return a % b;
}

int main() { PannDev
    
    int option = getOption();
    int a, b;
    char yn;

    // 1 2 3 4 5 6
    enum option{ADDITION = 1, SUBTRACTION, MULTIPLICATION, DIVISION, MODULO, EXIT};

    while (option != EXIT) {
        switch (option) {
            case ADDITION:
            cin >> a >> b;
            cout << handleAddition(a,b);
        break;
        case SUBTRACTION:
            cin >> a >> b;
            cout << handleSubtraction(a,b);
        break;
        case MULTIPLICATION:
            cin >> a >> b;
            cout << handleMultiplication(a,b);
        break;
        case DIVISION:
            cin >> a >> b;
            cout << handleDivision(a,b);
        break;
        case MODULO:
            cin >> a >> b;
            cout << handleModulo(a,b);
        break;
            default:
            cout << "wrong input" nL;
        break;
        }

    }

    return 0;
}

int getOption() {
    system("cls");
    cout << "Addition, Subtraction, Multiplication, Division " nL;
    cout << "====================================================" nL;
    cout << "1. Addition (+)" nL;
    cout << "2. Subtraction (-)" nL;
    cout << "3. Multiplication (*)" nL;
    cout << "4. Division (/)" nL;
    cout << "5. Modulo (%)" nL;
    cout << "6. EXIT" nL;
    cout << "====================================================" nL;

    cout << "Input Number [1 - 5]: ";
    int input; cin >> input;
    return input;
}

