#include <bits/stdc++.h>
using namespace std;


int sieve[1000005];
void createSieve() {
	int N = 100000;
	// step1- mark from 2 to 10^6 as 1
	for (int i = 2 ; i * i <= N ; i++) {
		//mark all the multiples of i if sieve[i] == 1
		if (sieve[i] == 1) {
			for (int j = i * i ; j <= N ; j = j + i) {

			}
		}
	}
}