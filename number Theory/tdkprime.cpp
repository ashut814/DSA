#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

vector<int> primes;
bool isPrime[90000001];

void sieve() {
	int maxN = 90000001;
	isPrime[0] = isPrime[1] = true;
	for (int i = 2 ; i * i <= maxN ; i++) {
		if (!isPrime[i]) {
			for (int j = i * i ; j <= maxN; j += i)
			{
				isPrime[j] = true;
			}
		}
	}
	for (int i = 2; i <= maxN; ++i)
	{

		if (!isPrime[i]) {
			primes.push_back(i);
		}
	}
}

int main()
{
	int q, n;
	cin >> q;

	sieve();

	while (q--) {
		cin >> n;
		cout << primes[n - 1] << endl;
	}
	return 0;
}