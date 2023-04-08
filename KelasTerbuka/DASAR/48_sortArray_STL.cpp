#include <bits/stdc++.h> 
#include <array> // bits/std gada array wkwk
//#include <algorithm>
#define PannDev std::ios_base::sync_with_stdio(0);
#define nL <<endl
//using namespace std;

const size_t arraySize = 10;

// overloading function
void printArray(std::array <int, arraySize> &angka){ // print array int
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

void printArray(std::array <char, arraySize> &angka){ // print array int
	std::cout << "Array: ";
	for(char &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main() { PannDev
	std::array <int, arraySize> angka = {9, 4, 6, 7, 8, 1, 3,2, 5 ,0};
	std::array <char, arraySize> huruf = {'c', 'h', 'j', 'e', 'r', 't', 'y', 'v', 'b', 'a'};

	printArray(angka); // print array int
	printArray(huruf); // print array int

	std::cout << std::endl;

	std::sort( angka.begin(), angka.end() );
	printArray(angka);

	std::sort( huruf.begin(), huruf.end() );
	printArray(huruf);


	return 0;
}



