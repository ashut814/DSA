/*
coin ; [1,2,5,10,20,50,500,2000] , N = 137 RS
{ greedy -> not optimal
** 137 - 100 = 37
** 37 - 20 = 17
** 17 - 10 = 7
** 7 - 5 = 2
** 2 - 2 = 0
**this works only for inr
}
{
	coins:[1,7,10] , n = 15
	** 15 - 10 = 5
	** 5 - 1 = 4
	** 4 - 1 = 3
	** 3 - 1 = 2
	** 2 - 1 = 1
	** 1 - 1 = 0 // according to this approach 6 coins needed
but that's not true

// ans is ==> 7 , 7 , 1 => 3 coins
}
{
	coin : {1,7,10}
	// using DP
	        15
	   /    |      \
   x(14)    y(8)  z(5)
  /    |  \
 (13) ( 7) (4)
 ans = min(x,y,z) + 1
}
*/


// top-down
int coinChangeTD(int n , vector<int> coins , int T , vector<int> dp) {
	if (n == 0) {
		return 0;
	}
	// lookup
	if (dp[n] != 0) {
		return dp[n];
	}
	// rec case
	int ans = INT_MAX;
	for (int i = 0 ; i < T ; i++) {
		if (n - coins[i] >= 0) {
			int subProblem = coinChangeTD(n - coins[i] , coins , T , dp);
			ans = min(ans , subProblem + 1);
		}
	}
	dp[n] = ans;
	return dp[n];
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n = 15;
	vector<int> coins;

}