#include <bits/stdc++.h>
using namespace std;

#define PannDev ios::sync_with_stdio(0);
#define nL <<endl

int main() {PannDev

    // increment post-fix
    cout << "Loop 1 \n"; 
	for(int i = 1; i <= 10; i++){
		cout << i nL; 
	}

    // increment
	cout << "\n Loop2 \n";
	for(int i = 1; i <= 10; i += 2 ){
		cout << i nL; 
	}

    // decrement post-fix
	cout << "\n Loop3 \n";
	for(int i = 1; i >= -10; i-- ){
		cout << i nL; 
	}

	cout << "\n Loop4 \n";

	int total = 0;
	for(int i = 1; i <= 10; i++, total += i){
		cout << i << " || " << total nL; 
	}

return 0;
}

/*
for ( var iteration; condition iteration; ifTrue ) {
    statement;
}

*/