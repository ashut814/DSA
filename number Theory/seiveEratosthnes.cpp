#include <bits/stdc++.h>
using namespace std;
bool isPrime[10000001];

void sieve() {
	int maxN = 1000000;
	for (int i = 1 ; i <= maxN; i++) {
		isPrime[i] = 1;
		isPrime[0] = isPrime[1] = 0;
	}
	for (int i = 2 ; i * i <= maxN ; i++) {
		if (isPrime[i]) {
			for (int j = i * i ; j <= maxN; j += i)
			{
				/* code */
				isPrime[j] = 0;
			}
		}
	}
}

int main()
{

}