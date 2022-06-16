// just print any one subsequence whose sum is k
#include<bits/stdc++.h>
using namespace std;

bool printS(int idx , vector<int> &ds , int s  , int sum , int arr[] , int n)
{
	if (idx == n) {
		if (s == sum) {
			for (auto i : ds) {
				cout << i << " ";
			}
			cout << endl;
			return true;
		}
		else {
			return false;
		}
	}
	/// pick
	ds.push_back(arr[idx]);
	s += arr[idx];
	if (printS(idx + 1 , ds , s , sum , arr , n) == true) {
		return true;
	}
	s -= arr[idx];
	ds.pop_back();

	// not pick
	if (printS(idx + 1 , ds , s , sum , arr , n) == true) {
		return true;
	}

	return false;
}
int main(int argc, char const *argv[])
{

	int arr[] = {1, 2, 1 , 2};
	int n = 4;
	int sum = 3;
	vector<int>ds;
	printS(0, ds, 0, sum, arr, n);
	return 0;
}