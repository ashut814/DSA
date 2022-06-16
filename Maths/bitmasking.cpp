#include <bits/stdc++.h>
using namespace std;
/** question
Consider this problem: There are N ≤ 5000 workers. Each worker is available
during some days of this month (which has 30 days). For each worker, you are
given a set of numbers, each from interval [1, 30], representing his/her
availability. You need to assign an important project to two workers but
they will be able to work on the project only when they are both available.
Find two workers  that are best for the job - maximize the number of days when
both these workers are available. You can compute the intersection of two
workers (two sets) in O(30) by using e.g. two pointers for two sorted
sequences. Doing that for every pair of workers is O(N²-30), slightly too slow.
We can think about the availability of a worker as a binary string
***/
int n;
vector<int> masks(n, 0);
int main()
{
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		int num_workers;
		cin >> num_workers;
		int mask = 0;
		for (int j = 0 ; j < num_workers ; j++) {
			int day;
			cin >> day;
			mask = mask | (1 << day);
		}
		masks[i] = mask;
	}
	int max_days = 0;
	int person1 = -1;
	int person2 = -1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; i < n; ++j)
		{
			int intersection = (masks[i] & masks[j]);
			int common_days = __builtin_popcount(intersection);

			if (common_days > max_days) {
				max_days = common_days;
				person1 = i;
				person2 = j;
			}
		}
	}
	cout << person1 << " " << person2 << " " << max_days << endl;
}