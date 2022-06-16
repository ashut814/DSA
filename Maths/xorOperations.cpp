/*

** x ^ 0 == x

** x ^ x == 0

** x ^ y ^ z == x  ^ z ^ y == y ^ x ^ z

*/


/***
 * given an array of n integer.
 * all interger are present in event except one.
 * find that one integer  which has odd count.
 * in O(n) time + O(1) space.
***/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	/** swap two numbers using xor
	int a = 4 , b = 6;

	a = a ^ b;

	b = b ^ a; // b --> a

	// b = b ^ a ^ b ==> a

	a = a ^ b; // a --> b
	// a = (a ^ b) ^ a

	cout << a << " " << b << endl;**/

	int n;
	cin >> n;
	int x;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		ans ^= x;
	}

	cout << ans << endl;
}