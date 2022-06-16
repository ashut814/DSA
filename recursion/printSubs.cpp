#include <bits/stdc++.h>
using namespace std;

void printF(int idx , vector<int>  &ds , int arr[] , int n) {
	if (idx >= n) {
		for (auto i : ds) {
			cout << i << " ";
		}
		cout << endl;
		return;
	}
	// take or pick the particuler index into subsequence
	ds.push_back(arr[idx]);
	printF(idx + 1 , ds , arr , n);
	ds.pop_back();

	// not take condition
	printF(idx + 1 , ds , arr , n);
}


int main(int argc, char const *argv[])
{
	/* code */
	int arr[] = {3, 1, 2};
	int n = 3;
	vector<int> ds;
	printF(0, ds, arr, n);

	return 0;
}