#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// #define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void res(int a, long b, char c, float d, double e) { //procedure
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << d << endl; //float
    cout << fixed << e << endl; //double
}

int main(){
    // PannDev
    
    int a; long b; char c; float d; double e;
    cin >> a >> b >> c >> d >> e;
    res(a, b, c, d, e); //procedure

    return 0;
}


// ignore this (function blm selesai)
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

string resFunction(int a, long b, char c, float d, double e) { //function
    string result;
    result += to_string(a) + "\n";
    result += to_string(b) + "\n";
    result += c;
    result += "\n" + to_string(fixed) + "\n" + to_string(e) + "\n";
    return result;
}

int main(){
    int a; long b; char c; float d; double e;
    cin >> a >> b >> c >> d >> e;
    cout << resFunction(a, b, c, d, e); //call function
    return 0;
}
*/