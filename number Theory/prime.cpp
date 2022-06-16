#include<bits/stdc++.h>
using namespace std;

//  using seive

bool checkPrime(int n) {
	if (n == 1) return false;
	for (int i = 2 ; i * i <= n ; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if (checkPrime(n)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}

