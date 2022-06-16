#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long a;
	cin >> a;

	// cout << (a | b) << endl;
	// cout << (a & b) << endl;
	// cout << (a ^ b) << endl;
	// cout << (a << b) << endl;
	// cout << (a >> b ) << endl;
	// cout << (~a) << endl;

// count set bits
	cout << __builtin_popcountll(a) << endl;
//  count trailing zeros
	cout << __builtin_ctz(a) << endl;
//  count leading zeros
	cout << __builtin_clz(a) << endl;

//  to check if bit is set or not

	if ((n >> 1) & 1) {
		// use this
		//
	}
	if (n & (1 << i)) {
		// not very common
	}

	// removing last 1 bit of the number
	// A = 110100 -> 110000
	// lsb , msb
	// a & a-1
	// A-1 = 110011 & 110100 = 110000


}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}