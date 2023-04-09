#include <bits/stdc++.h>
//#include <bitset>   included in bits std
using namespace std;

#define PannDev std::ios::sync_with_stdio(0);
#define nL << endl


void printBinary(unsigned short val, string name) {
	cout << name << " = " << bitset<8>(val) nL;
}

int main () {PannDev

unsigned short a = 6;
unsigned short b = 10;
unsigned short c; // result


cout << "& - Bitwise AND" nL; // 1 if both 1
c = a & b;
printBinary(a, "a");
printBinary(b, "b");
printBinary(c, "c");
cout << "c = " << c nL nL;

cout << "| - Bitwise OR" nL; // inclus ive OR, 1 if  one and both 1
c = a | b;
printBinary(a, "a");
printBinary(b, "b");
printBinary(c, "c");
cout << "c = " << c nL nL;

cout << "^ - Bitwise XOR" nL; // exlusive OR, 1 if diffrent.
c = a ^ b;
printBinary(a, "a");
printBinary(b, "b");
printBinary(c, "c");
cout << "c = " << c nL nL;

cout << "~ - Bitwise NOT" nL; // exlusive NOT, kebalikan.
c = ~a;
printBinary(a, "a");
printBinary(c, "c");
cout << "c = " << c nL nL;

cout << "<< - Bitwise SHL" nL; // shift left.
c = a << 2; // geser kiri 2
printBinary(a, "a");
printBinary(c, "c");
cout << "c = " << c nL nL;

cout << ">> - Bitwise SHR" nL; // shift right.
c = a >> 2; // geser kanan 2
// 1 nya kemana? ditaruh di address setelahnya, ga balik lagi, address pointer selanjutnya.
printBinary(a, "a");
printBinary(c, "c");
cout << "c = " << c nL nL;

printBinary(a,"a");

return 0;
}

// bitwise operator
/*
	&		AND bitwise AND
	|		OR bitwise OR
	^		XOR bitwise XOR
	~		NOT
	<<		SHL Shift bits left     
	>>		SHR Shift bits right     
*/
// unsigned (>= 0)

/*
different ! its not bitwise !
insertion.
cout << 
cin >>
*/