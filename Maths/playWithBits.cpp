/*

** 10111011 {0th bit - least significant bit(LSB)} {Nth bit - most significant bit(MSB)}

** setBit - bit is 1

** unset  - bit is 0






*/

#include<bits/stdc++.h>
using namespace std;

void printBinary(int num) {
	for (int i = 10 ; i >= 0 ; --i) {
		cout << ((num >> i) & 1);
	}
	cout << endl;
}

int main()
{
	printBinary(9);
	int a = 9;
	int i = 3;
	if ((a & (1 << i)) != 0) {
		cout << "set bit";
	}
	else {
		cout << "not setbit";
	}
	cout << endl;

	// bit-set
	printBinary( a | (1 << 1));

	// bit-unset
	printBinary(a & (~(1 << 3)));

	// bit toggle

	printBinary( a ^ (1 << 2));
	printBinary( a ^ (1 << 3));

	// count of setbits
	int cnt = 0;
	for (int  i = 31 ; i >= 0 ; i--) {
		if ((a & (1 << i)) != 0) {
			cnt++;
		}
	}
	cout << cnt << endl;

	// inbuilt function
	cout << __builtin_popcount(a);
	cout << __builtin_popcountll((1ll << 35));
}

