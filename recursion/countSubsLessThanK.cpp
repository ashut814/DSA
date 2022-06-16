#include<bits/stdc++.h>
using namespace std;

int printS(int idx , vector<int> &ds , int s  , int sum , int arr[] , int n)
{
	if (idx == n) {
		if (s == sum) {
			return 1;
		}
		return 0;
	}
	/// pick
	ds.push_back(arr[idx]);
	s += arr[idx];


	int l = printS(idx + 1 , ds , s , sum , arr , n);
	s -= arr[idx];
	ds.pop_back();

	// not pick
	int r = printS(idx + 1, ds, s, sum, arr, n);

	return l + r;
}
int main(int argc, char const *argv[])
{

	int arr[] = {1, 2, 1};
	int n = 3;
	int sum = 2;
	vector<int>ds;
	cout << printS(0, ds, 0, sum, arr, n);
	return 0;
}