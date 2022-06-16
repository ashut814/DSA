// 0 1 1 2 3 5 8
#include <bits/stdc++.h>
using namespace std;

//using recursion -> O(2^n)
// int fib1(int n) {
// // base case
// if (n == 0 || n == 1) return n;
// int ans;
// ans = fib1(n - 1) + fib1(n - 2);
// 	return ans;
// }

// using TOP-DOWN => recursion + memoisation
// O(N) + O(N)
int f(int n , vector<int> &dp) {
	//  base case
	if (n <= 1) return n;
	// look up case
	if (dp[n] != 0) {
		return dp[n];
	}
	int ans;
	ans = f(n - 1 , dp) + f(n - 2 , dp);

	return dp[n] = ans;

}
// bottom up approach => O(N) + O(N)
int fibBU(int n) {
	vector<int> dp(100, 0);
	dp[1] = 1;
	for (int i = 2; i <= n; ++i) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}

// space optimisation + BU
int fibSpaceOPT(int n) {
	if (n <= 1) return n;

	int a = 0;
	int b = 1;
	int c;
	for (int i = 2; i <= n; ++i)
	{
		/* code */
		c = a + b;
		a = b;
		b = c;
	}
	return c;

}
int main()
{
	int n;
	cin >> n;
	// int ans = fib1(n);
	// cout << ans;
	vector<int> dp(n + 1, 0);
	// cout << f(n, dp);
	cout << fibSpaceOPT(n) << endl;

	return 0;
}