/*

** (high + low) >> 1

*/

#include <bits/stdc++.h>
using namespace std;

void printBinary(int num) {
	for (int i = 10 ; i >= 0 ; --i) {
		cout << ((num >> i) & 1);
	}
	cout << endl;
}

int main() {
	// for (int i = 0 ; i < 8 ; i++) {
	// 	printBinary(i);
	// 	if (i & 1) {
	// 		cout << "odd" << endl;
	// 	}
	// 	else {
	// 		cout << "even" << endl;
	// 	}
	// }

	/*	int n = 5;
		// divison by rightshift
		cout << (n >> 1) << endl;
		// multiplication by leftshift
		cout << (n << 1) << endl;

	*/
	// changing upperCase and lowercase using bits


	/*for (char c = 'A' ; c <= 'E' ; ++c) {
		cout << c << endl;
		printBinary(c);
	}

	for (char c = 'a' ; c <= 'e' ; ++c) {
		cout << c << endl;
		printBinary(c);
	}
	char A = 'A';
	char a =  A | (1 << 5);
	cout << a << endl;

	cout << char(a & (~(1 << 5))) << endl;

	cout << char('C' | ' ') << endl;

	cout << char('c' & '_'); */

	/*char B = 'B';
	char b = B | ' ';
	cout << b << endl;

	char c = 'c';
	char C = c & '_';
	cout << C << endl; */

	// clear LSB

	printBinary(59);
	int i = 4;
	int a = 59;

	int b = (a & (~((1 << (i + 1)) - 1)));
	printBinary(b);

	// clear msb
	i = 3;
	int c = (a & ((1 << (i + 1)) - 1));
	printBinary(c);

	// check pow of 2
	int n = 10;

	if (n & (n - 1)) {
		cout << "not power of 2" << endl;
	}
	else {
		cout << "pow of 2" << endl;
	}
}