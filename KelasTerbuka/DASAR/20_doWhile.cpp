#include <bits/stdc++.h>
using namespace std;

#define PannDev ios::sync_with_stdio(0);
#define nL <<endl

int main() {PannDev

int a = 0;

do {
    cout << "loop ke- " << a nL;
}
while (a < 0);
cout nL;

int b = 5;

do {
    cout << "loop ke- " << b nL;
    b++;
}
while (b < 10);
cout nL;

return 0;
}

/*
do {
    statemnt
} while (condition);

dilakukan pasti 1x
start > STATEMENT >> condition [1/0] >> [1] >> statement >> condition [1/0] >> [0] >> break;
*/