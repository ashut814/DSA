#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define mod (int) 998244353
#define MOD (int) 1e9+7
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)
#define int int
#define ll long long
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define fi first
#define se second
#define endl "\n"
#define ii pair<int, int>
#define pp pair<ll , string>
#define vii vector<ii>
#define sz(s) s.size()
#define bits(n) __builtin_popcount(n)

const int MAXN = (int)((1e5) + 100);
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}

void helper() {
	int n;
	cin >> n;
	int arr[n];

	vector<int> even;
	vector<int> odd;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		if (x % 2 == 0) {
			even.pb(x);
		}
		else {
			odd.pb(x);
		}
	}
	int o = odd.size();
	int e = n - o;

	ll ans = e * o;

	for (int i = 0 ; i < 0 ; i++) {
		for (int j = i + 1 ; j < o ; j++) {
			if ((__gcd(odd[i]) , 2 * odd[j]) > 1)
				ans++;
		}
	}
	ans += (e) * (e - 1) / 2;

	cout << ans << endl;
}

int int main(int argc, char const *argv[])
{
	tc(t) {
		helper();
	}
	return 0;
}