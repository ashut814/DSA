#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
vector<int> sieve() {
	bool isPrime[MAX];
	for (int i = 0 ; i < MAX ; i++) {
		isPrime[i] = true;
	}
	for (int i = 2 ; i * i < MAX ; i++) {
		if (isPrime[i]) {
			for (int j = i * i ; j < MAX ; j += i) {
				isPrime[j] = false;
			}
		}
	}
	vector<int>primes;
	primes.push_back(2);
	for (int i = 3 ; i < MAX ; i += 2) {
		if (isPrime[i]) {
			primes.push_back(i);
		}
	}
	return primes;
}

void printPrimes(int l , int r , vector<int> primes) {
	bool isPrime[r - l + 1];
	for (int i = 0 ; i <= r - l ; i++) {
		isPrime[i] = true;
	}
	for (int i = 0 ; primes[i] * (long long)primes[i] <= r ; i++) {
		int currPrime = primes[i];
		//just smaller or value equal to l
		long long base = (l / (currPrime)) * (currPrime);
		if (base < l ) {
			base = base + currPrime;
		}
		// mark all multiples of L to R as false
		for (long long j = base ; j <= r ; j += currPrime) {
			isPrime[j - l];
		}
		// there may be a case where base itself is prime
		if (base == currPrime) {
			isPrime[base - l] = false;
		}
	}
	for (int i = 0 ; i <= r - l ; i++) {
		if (isPrime[i] == true) {
			cout << i + l << endl;
		}
	}
}

int main()
{
	vector<int> primes = sieve();
	int t;
	cin >> t;
	while (t--) {
		int l, r;
		cin >> l >> r;
		printPrimes(l, r, primes);
	}
}