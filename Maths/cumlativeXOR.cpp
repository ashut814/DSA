// XOR of 1-N
// 1^2^3 ......... ^N
// N <= 10^`8
// bf will give tle

/* PATTERN ->
8 ^ 0 = 8 -> N
7 ^ 7 = 0 -> 0
6 ^ 1 = 7 -> N+1
5 ^ 4 = 1 -> 1
4 ^ 0 = 4 -> N
3 ^ 3 = 0 -> 0
2 ^ 3 = 3 -> N+1
1 ^ 2 = 1 -> 1

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long n;
	cin >> n;
	if (n % 4 == 0) {
		cout << n << endl;
	}
	if (n % 4 == 1) {
		cout << 1 << endl;
	}
	if (n % 4 == 2)  {
		cout << n + 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
}
int main(int argc, char const * argv[])
{
	// tc(t) {
	// 	solve();
	// }
	solve();
	return 0;
}










