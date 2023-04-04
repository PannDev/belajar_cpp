#include <bits/stdc++.h>
#define PannDev ios::sync_with_stdio(0);
using namespace std;

int sum(int a, int b) {
	return a + b;
}
int min(int a, int b) {
	return a - b;
}
int times(int a, int b) {
	return a * b;
}
int divide(int a, int b) {
	return a / b;
}

int main () { PannDev
int a,b; char op;
cout << "input number and operator separated by space" << endl;
cin >> a >> op >> b;
switch (op) {
	case '+' :
		cout << sum(a,b) << endl;
		break;
	case '-' :
		cout << min(a,b) << endl;
		break;
	case '*' :
		cout << times(a,b) << endl;
		break;
	case '/' :
		cout << divide(a,b) << endl;
		break;
	default :
		cout << "Only allowed ( + - * / ) bro." << endl;
		return main();
		break;
}
}