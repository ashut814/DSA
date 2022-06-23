/*calculate The Value Of nCr
#include <bits/stdc++.h>
using namespace std;

//int fact(int n);
// Returns factorial of n
int fact(int n)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
}

int nCr(int n, int r)
{
	return fact(n) / (fact(r) * fact(n - r));
}



// Driver code
int main()
{
	int n , k;
	cin >> n >> k;
	cout << nCr(n, k);
	return 0;
}


*/


/* ncr using pascal triangle
#include <bits/stdc++.h>
using namespace std;

// Initialize the matrix with 0
int l[1001][1001] = { 0 };

void initialize()
{

	// 0C0 = 1
	l[0][0] = 1;
	for (int i = 1; i < 1001; i++) {
		// Set every nCr = 1 where r = 0
		l[i][0] = 1;
		for (int j = 1; j < i + 1; j++) {

			// Value for the current cell of Pascal's triangle
			l[i][j] = (l[i - 1][j - 1] + l[i - 1][j]);
		}
	}
}

// Function to return the value of nCr
int nCr(int n, int r)
{
	// Return nCr
	return l[n][r];
}

// Driver code
int main()
{
	// Build the Pascal's triangle
	initialize();
	int n, r;
	cin >> n >> r;
	cout << nCr(n, r);
}

*/

