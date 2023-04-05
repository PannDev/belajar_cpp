#include <bits/stdc++.h>
#define PannDev ios_base::sync_with_stdio(0);
using namespace std;

int kuadrat(int x){
	int y = x * x;
	return y;
}

int tambah(int a, int b) {
	return a+b;
}

int main (){
	PannDev
	int input; cin >> input;
	int res = kuadrat(input);
	
	cout << res << endl << endl;
	
	cout << "A : "; int a; cin >> a;
	cout << "B : "; int b; cin >> b;
	cout << tambah(a,b) << endl;
	
	return 0;
}
