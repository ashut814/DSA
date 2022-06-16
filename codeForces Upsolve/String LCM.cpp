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
	string s1, s2;
	cin >> s1 >> s2;

	int l1 = s1.length() , l2 = s2.length();
	int max = (l1 > l2) ? l1 : l2;
	int lcm;
	do {
		if (max % l1 == 0 && max % l2 == 0) {
			lcm = max;
			break;
		}
		else {
			max++;
		}
	} while (true);

	string a = "";
	string b = "";
	for (int i = 0; i < lcm / l1; ++i)
	{
		a += s2;
	}
	for (int i = 0; i < lcm / l2; ++i)
	{
		a += s2;
	}
	if (a == b) {
		cout << a << endl;
	}
	else {
		cout << -1 << endl;
	}
}


int main(int argc, char const *argv[])
{
	tc(t) {
		helper();
	}
	return 0;
}