//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//
//int main(){
////    PannDev
//
//int n; cin >> n; // nanya panjang array ke user
//int arr[n]; // inisialisasi panjang arr sebanyak n
//int panjang = sizeof(arr) / sizeof(arr[0]);
//cout << "Okee, Panjang Array = " << panjang << endl;
//
//for (int i = 0; i<=n; i++) {
//		cin >> arr[i];
//		cout << "array ke " << i << " adalah " << arr[i] << endl;
//} cout << endl;
//
//cout << " mau keluarin array ke berapa? "; int i; cin >> i;
//cout << "okee array ke " << i << " = " << arr[i] << endl;
//cout << endl;
//
//int sum = 0;
//for (int i = 0; i<=n; i++) {
//	sum += arr[i];
//}
//cout << "Hasil Penjumlahan Semua Array = " << sum << endl;
//
//    return 0;
//}

// 5 7 1 4 ==> 4 1 7 5 nyoba reverse array
#include <bits/stdc++.h>
using namespace std;

int fpb(int a, int b) {
	return b == 0 ? a : (b, a % b);
}

int kpk(int a, int b) {
	return a * b / fpb(a,b);
}

int main ( ) {
int a, b;
cin >> a >> b;

cout << endl;

cout << "FPB = " << fpb(a,b) <<endl;
cout << "KPK = " << kpk(a,b) <<endl;
}


//
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
// Complete the code.
//string nameNum[] = { "one", "two", "three", "four", "five", "six"
//    "seven", "eight", "nine" };
//    int input; cin >> input;
//    
//    string res = (input >= 1 && input <= 9) ?
//    nameNum[input - 1]
//    : "Greater than 9";
//    
//    cout << res << endl;
//    return 0;
//}