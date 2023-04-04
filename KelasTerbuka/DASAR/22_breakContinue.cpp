#include <bits/stdc++.h>
#define PannDev ios::sync_with_stdio(0);
using namespace std;

int main () { PannDev
cout << "hai" << endl;
int i = 0;
while (i<=10) {
	i++;
	if (i % 2 == 0) {
		continue;
	} else if (i == 10) {
		cout << "10 break out" << endl;
		break;
	}
	cout << i << endl;
}
	cout << "akhirnya" << endl;
	
	return 0;
}