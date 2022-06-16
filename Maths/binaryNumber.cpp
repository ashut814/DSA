/*
AND(&&) : 0 & 0 => 0 , 0 & 1 => 0 , 1 & 0 => 0 , 1 & 1 => 1
OR(||) : 0 || 0 => 0 , 0 || 1 => 1 , 1 || 0 => 1 , 1 || 1 => 1
XOR(^) : 0 ^ 0 => 0 , 0 ^ 1 => 1 , 1 ^ 0 => 1 , 1 ^ 1 => 0

NOT(~) : 1 -> 0 and 0 ->  1

right shift : << (3 << 1) => 11 -> 110 =>
left shift : >> (3 >> 1) => 11 -> 1


*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int main(int argc, char const *argv[])
{
	cout << INT_MAX << endl;
	long long a = (1ll << 32) - 1;
	cout << a << endl;

	unsigned int b = (1ll << 32) - 1;
	cout << b << endl;

	return 0;
}
