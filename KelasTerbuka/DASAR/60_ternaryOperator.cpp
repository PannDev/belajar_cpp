#include <bits/stdc++.h>
#include <string>
using namespace std;

#define PannDev std::ios::sync_with_stdio(0);
#define nL << endl

/*
 Ternary Operator 
 condition ? true : false;
 digunakan untuk 2 kondisi saja, >2 pakai if-else agar tidak susah dibaca.
 
 */

int main () { PannDev cout nL;
// greater than || smaller than || equals
char yn;
cout << "input two number separated by space: ";
int a,b; cin >> a >> b;


string output = a < b ? // condition ?
				to_string(a) + R"( smaller than )" + to_string(b) // True
                : to_string(a) + R"( greater than )" + to_string(b); // : False
cout << output << endl;
// R itu  Raw String Literal



// >2 condition? better use if-else bro.
/* found bug ! ( solved using cin.fail() )
why if input char/string the output will given to condition a == b and terminated?
example input >> a a
output "sama dengan" and terminal will terminated.


if ( cin.fail() ) {
	cout << "only accepted number." nL;
	cout << "retry." nL;
} else if (a > b) {
	cout << a << " greater than " << b nL;
	               
	cout << "more? [y/n]: "; cin >> yn;
	if (yn == 'y') return main();
	
} else if (a == b ){
	cout << a << " sama dengan " << b nL;
		               
	cout << "more? [y/n]: "; cin >> yn;
	if (yn == 'y') return main();
	             
} else { // a < b
	cout << a << " smaller than " << b nL;
	               
	cout << "more? [y/n]: "; cin >> yn;
	if (yn == 'y') return main();
	
} */

	return 0;
}