#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
using namespace std;

#include <cmath>
/*
library cmath : cppreference.com
ceil(x) = pembulatan keatas
floor(x) = pembulatan kebawah
cos(x) = cosinus
sin(x) = sinus
tan(x) = tangen
sqrt(x) = akar
pow(x,y) = x pangkat y
log(x) = dengan basis natural
log10(x) = dengan basis 10
fabs(x) = nilai absolut dalam float
abs(x) = absolut (mutlak)
exp(x) = exponen
*/

int main () { PannDev
	int x;
	cout << "menghitung akar dari x = "; cin >> x;
    double y = sqrt(x);
	cout << "akarnya adalah = " << y << endl;
	cin.get();
	
	return 0;
}