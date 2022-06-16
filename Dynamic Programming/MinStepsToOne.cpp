/*
Given a positive integer n and 3 operations on n:

n = n-1
n / 2 (if n is even)
n / 3 (if n % 3 == 0)
Find the minimum number of above operations to reduce n to 1.

Example 1:

Input: n = 9
Output: 2
Explanation:
Step 1: 9 / 3 = 3
Step 2: 3 / 3 = 1

Example 2:

Input: n = 8
Output: 3
Explanation:
Step 1: 8 / 2 = 4
Step 2: 4 / 2 = 2
Step 3: 2 - 1 = 1
Example 3:

Input: n = 28
Output: 4
*/
#include <bits/stdc++.h>
using namespace std;

// top-down
int minSteps(int n , vector<int> &dp) {
	//base case
	if (n == 1) return 0;

	//rec case
	//if n is already computed
	if (dp[n] != 0) {
		return dp[n];
	}
	// compute if dp[n] is not known
	int a, b, c;
	a = b = c = INT_MAX;
	if (n % 3 == 0) {
		a = minSteps(n / 3, dp) + 1;
	}
	if (n % 2 == 0) {
		b = minSteps(n / 2 , dp) + 1;
	}
	else {
		c = minSteps(n - 1, dp) + 1;
	}
	int ans = min(min(a, b), c); + 1;
	return dp[n] = ans;
}

// bottom - up
int minStepsBU(int n) {
	vector<int> dp(n + 1, 0);
	dp[1] = 0;
	for (int i = 2; i <= n ; i++) {
		int a, b, c;
		a = b = c = INT_MAX;
		if (n % 3 == 0) {
			a = dp[i / 3] ;
		}
		if (n % 2 == 0) {
			b = dp[i / 2] ;
		}
		c = dp[i - 1];

		dp[i] = min(min(a, b), c) + 1;
	}
	return dp[n];
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin >> n;
	vector<int> dp(n + 1, 0);
	cout << minStepsBU(n);
	return 0;
}