#include <bits/stdc++.h>
#define PannDev ios::sync_with_stdio(0);
#define slv solve();
#define r0 return 0;
using namespace std;

//void solve() {
//	int a; cin >> a;
//	string day[] = { "Senin", "Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu" };
//	auto res = (a >= 1 & a <= 7) ? day[a-1] : "Harap Masukan 1 - 7";
//	cout << res << endl;
//}

string solve() {
	int a; cin >> a;
	string day[] = { "Senin", "Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu" };
	return (a >= 1 & a <= 7) ? day[a-1] : "Harap Masukan 1 - 7";
}

int main () {
	PannDev
	cout << solve() << endl;
	r0
}