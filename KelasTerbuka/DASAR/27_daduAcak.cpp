#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
using namespace std;

#include <cmath> // mengandung fungsi random

int main() { PannDev
//	for (int i = 0; i < 10; i++) {
//		cout <<1 + (rand() % 6) << endl;
//	}
//	cin.get();

while (true) {
	cout << "Lempar dadu? [y/n]  ";
	char choose; cin >> choose;
	
	if (choose == 'y') {
		cout <<1 + (rand() % 6) << endl;
	} else if (choose == 'n') {
		break;
	} else {
		cout << "Warning !  only accepted [y/n]" << endl << endl;
	}
}
	
	return 0;
}